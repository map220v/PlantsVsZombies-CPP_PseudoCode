// Class: DNodeLoader


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::lazyInitSize() */

void __thiscall DNodeLoader::lazyInitSize(DNodeLoader *this)

{
  float fVar1;
  long lVar2;
  float *pfVar3;
  float local_10;
  int local_c;
  long local_8;
  
  lVar2 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (this[0xf8] == (DNodeLoader)0x0) {
    local_10 = (float)*(int *)(gLawnApp + 0xd4);
    pfVar3 = eastl::max_alt<float>((float *)(gLawnApp + 0x28d8),&local_10);
    fVar1 = *pfVar3;
    *(undefined4 *)(this + 0xec) = *(undefined4 *)(lVar2 + 0x28dc);
    *(float *)(this + 0xe8) = fVar1;
    LawnApp::GetScreenContentOffset();
    this[0xf8] = (DNodeLoader)0x1;
    *(float *)(this + 0xf0) = (float)(int)local_10;
    *(float *)(this + 0xf4) = (float)local_c;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DNodeLoader::getScreenSize() */

DNodeLoader * __thiscall DNodeLoader::getScreenSize(DNodeLoader *this)

{
  lazyInitSize(this);
  return this + 0xe8;
}


/* DNodeLoader::getScreenOffsetPos() */

DNodeLoader * __thiscall DNodeLoader::getScreenOffsetPos(DNodeLoader *this)

{
  lazyInitSize(this);
  return this + 0xf0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::getNodeCreator(std::string const&) */

void __thiscall DNodeLoader::getNodeCreator(DNodeLoader *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
             ::find((unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
                     *)(this + 0x78),param_1);
  local_10 = FUN_04f975a8();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                      ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_18);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::getActionCreator(std::string const&) */

void __thiscall DNodeLoader::getActionCreator(DNodeLoader *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
             ::find((unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
                     *)(this + 0xb0),param_1);
  local_10 = FUN_04f976f8();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                      ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_18);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::DNodeLoader() */

void __thiscall DNodeLoader::DNodeLoader(DNodeLoader *this)

{
  long lVar1;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__DNodeLoader_06a266c0;
  std::
  unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
  ::unordered_map((ulong)(this + 8),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
  ::unordered_map((ulong)(this + 0x40),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
  ::unordered_map((ulong)(this + 0x78),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
  ::unordered_map((ulong)(this + 0xb0),(hash *)0xa,aeStack_20,aaStack_18);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xe8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xf0));
  this[0xf8] = (DNodeLoader)0x0;
  lVar1 = ___stack_chk_guard;
  this[0xf9] = (DNodeLoader)0x0;
  this[0xfa] = (DNodeLoader)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::~DNodeLoader() */

void __thiscall DNodeLoader::~DNodeLoader(DNodeLoader *this)

{
  bool bVar1;
  pair *ppVar2;
  undefined8 local_28;
  undefined8 local_20;
  pair<std::string_const,Sexy::FontLayer*> apStack_18 [8];
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__DNodeLoader_06a266c0;
  local_28 = std::
             unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
             ::begin((unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
                      *)(this + 0xb0));
  local_20 = FUN_04f976f8();
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20), bVar1
        ) {
    ppVar2 = (pair *)std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::
                     operator*((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_28)
    ;
    std::pair<std::string_const,Sexy::FontLayer*>::pair(apStack_18,ppVar2);
    if (local_10 != (long *)0x0) {
      (**(code **)(*local_10 + 8))();
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_18);
    std::__detail::_Node_iterator<std::pair<std::string_const,DActionBaseCreator*>,false,true>::
    operator++((_Node_iterator<std::pair<std::string_const,DActionBaseCreator*>,false,true> *)
               &local_28);
  }
  local_28 = std::
             unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
             ::begin((unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
                      *)(this + 0x78));
  local_20 = FUN_04f975a8();
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20), bVar1
        ) {
    ppVar2 = (pair *)std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::
                     operator*((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_28)
    ;
    std::pair<std::string_const,Sexy::FontLayer*>::pair(apStack_18,ppVar2);
    if (local_10 != (long *)0x0) {
      (**(code **)(*local_10 + 8))();
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_18);
    std::__detail::_Node_iterator<std::pair<std::string_const,DNodeCreator*>,false,true>::operator++
              ((_Node_iterator<std::pair<std::string_const,DNodeCreator*>,false,true> *)&local_28);
  }
  std::
  unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
  ::~unordered_map((unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
                    *)(this + 0xb0));
  std::
  unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
  ::~unordered_map((unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
                    *)(this + 0x78));
  std::
  unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
  ::~unordered_map((unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
                    *)(this + 0x40));
  std::
  unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
  ::~unordered_map((unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
                    *)(this + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DNodeLoader::~DNodeLoader() */

void __thiscall DNodeLoader::~DNodeLoader(DNodeLoader *this)

{
  ~DNodeLoader(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::loadFontTypes() */

void __thiscall DNodeLoader::loadFontTypes(DNodeLoader *this)

{
  unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
  *this_00;
  undefined8 *puVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xf9] == (DNodeLoader)0x0) {
    this_00 = (unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
               *)(this + 8);
    this[0xf9] = (DNodeLoader)0x1;
    std::string::string(asStack_10,"CafeteriaBlack_12");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_12;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_16");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_16;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_18");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_18;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_19_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_20");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_20;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_22");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_22;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_22_Shaded");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_22_Shaded;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_22_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_22_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_22_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_24_Shaded");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_24_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_26");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_26;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_26_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_26_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_26_Shaded");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_26_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_28_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_28_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CafeteriaBlack_32_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_CafeteriaBlack_32_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_22");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_22;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_22_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_22_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_26");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_26;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_28");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_28;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_30");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_30;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_30_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_30_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_32");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_32;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_36");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_36;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_40");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_40;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_42_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_42_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_42_BlackOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_42_BlackOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZKaTong_42");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZKaTong_42;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_60");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_60;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_40_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_40_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_40_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_36_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_36_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_34_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_34_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_34_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_34_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_32");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_32;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_32_Shaded");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_32_Shaded;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_32_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_32_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_32_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_28");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_28;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_28_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_28_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_28_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_28_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_28_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_26");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_26;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_26_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_26_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_26_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_26_Shaded");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_26_Shaded;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_26_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_26_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_24_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_24_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_24_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_24_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_24_Navy_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_24_Navy_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_22");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_22;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_22_Shaded");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_22_Shaded;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_22_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_22_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_22_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_20");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_20;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_20_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_20_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_18");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_18;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZShaoEr_16");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZShaoEr_16;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_46_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_46_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_40_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_32");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_32;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_32_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_32_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_28");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_28;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_26");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_26;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_26_Shaded");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_26_Shaded;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_26_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_24");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_24;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_24_ThickOutline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_20");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_19_HardShadow");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_19_HardShadow;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_19_Outline");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_18");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_18;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"FZCuYuan_16");
    puVar1 = (undefined8 *)
             std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = PrimeText_Game::Typeface_FZCuYuan_16;
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::getFontType(std::string const&) */

void __thiscall DNodeLoader::getFontType(DNodeLoader *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  loadFontTypes(this);
  local_18 = std::
             unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
             ::find((unordered_map<std::string,PrimeText_PotentialTypeface*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,PrimeText_PotentialTypeface*>>>
                     *)(this + 8),param_1);
  local_10 = FUN_04f97848();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                      ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_18);
    if (local_8 == ___stack_chk_guard) {
      PrimeText_PotentialTypeface::Typeface(*(PrimeText_PotentialTypeface **)(lVar2 + 8));
      return;
    }
  }
  else {
    lVar2 = 0;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::loadTweenTypes() */

void __thiscall DNodeLoader::loadTweenTypes(DNodeLoader *this)

{
  unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
  *this_00;
  undefined4 *puVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xfa] == (DNodeLoader)0x0) {
    this_00 = (unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
               *)(this + 0x40);
    this[0xfa] = (DNodeLoader)0x1;
    std::string::string(asStack_10,"Linear");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Sine_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 1;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Sine_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 2;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Sine_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 3;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quad_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 4;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quad_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 5;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quad_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 6;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Cubic_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 7;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Cubic_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 8;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Cubic_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 9;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quart_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 10;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quart_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0xb;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quart_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0xc;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quint_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0xd;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quint_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0xe;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Quint_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0xf;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Expo_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x10;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Expo_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x11;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Expo_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x12;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Circ_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x13;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Circ_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x14;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Circ_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x15;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Elastic_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x16;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Elastic_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x17;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Elastic_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x18;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Back_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x19;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Back_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x1a;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Back_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x1b;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Bounce_EaseIn");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x1c;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Bounce_EaseOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x1d;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Bounce_EaseInOut");
    puVar1 = (undefined4 *)
             std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::operator[](this_00,asStack_10);
    *puVar1 = 0x1e;
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::getTweenType(std::string const&) */

void __thiscall DNodeLoader::getTweenType(DNodeLoader *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  loadTweenTypes(this);
  local_18 = std::
             unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
             ::find((unordered_map<std::string,DTween::TweenType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DTween::TweenType>>>
                     *)(this + 0x40),param_1);
  local_10 = FUN_04f978a8();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar3 = 0;
  if (bVar1) {
    lVar2 = std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                      ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_18);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::addNodeCreator(std::string const&, DNodeCreator*) */

void __thiscall DNodeLoader::addNodeCreator(DNodeLoader *this,string *param_1,DNodeCreator *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
             ::find((unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
                     *)(this + 0x78),param_1);
  local_10 = FUN_04f975a8();
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)
             std::
             unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
             ::operator[]((unordered_map<std::string,DNodeCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DNodeCreator*>>>
                           *)(this + 0x78),param_1);
    *puVar2 = param_2;
    uVar3 = FUN_0547429c(param_1);
    if (local_8 == ___stack_chk_guard) {
      Sexy::OutputDebugStrF((wchar_t *)"\naddNodeCreator name = [%s]",uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeLoader::addActionCreator(std::string const&, DActionBaseCreator*) */

void __thiscall
DNodeLoader::addActionCreator(DNodeLoader *this,string *param_1,DActionBaseCreator *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
             ::find((unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
                     *)(this + 0xb0),param_1);
  local_10 = FUN_04f976f8();
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)
             std::
             unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
             ::operator[]((unordered_map<std::string,DActionBaseCreator*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DActionBaseCreator*>>>
                           *)(this + 0xb0),param_1);
    *puVar2 = param_2;
    uVar3 = FUN_0547429c(param_1);
    if (local_8 == ___stack_chk_guard) {
      Sexy::OutputDebugStrF((wchar_t *)"\naddActionCreator name = [%s]",uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

