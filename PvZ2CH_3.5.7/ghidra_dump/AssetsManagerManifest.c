// Class: AssetsManagerManifest


/* AssetsManagerManifest::getAssets() const */

AssetsManagerManifest * __thiscall AssetsManagerManifest::getAssets(AssetsManagerManifest *this)

{
  return this + 0x90;
}


/* AssetsManagerManifest::getTotalFileSize() const */

undefined4 __thiscall AssetsManagerManifest::getTotalFileSize(AssetsManagerManifest *this)

{
  return *(undefined4 *)(this + 0x30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::getVersionToInt(std::string) */

void AssetsManagerManifest::getVersionToInt(string *param_1)

{
  bool bVar1;
  int iVar2;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"");
  iVar2 = 0;
  if (!bVar1) {
    local_c = 0;
    Sexy::StringToInt(param_1,&local_c);
    iVar2 = local_c;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* AssetsManagerManifest::~AssetsManagerManifest() */

void __thiscall AssetsManagerManifest::~AssetsManagerManifest(AssetsManagerManifest *this)

{
  Sexy::StructuredData::~StructuredData((StructuredData *)(this + 0xe0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 200));
  std::
  unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
  ::~unordered_map((unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                    *)(this + 0x90));
  std::string::~string((string *)(this + 0x88));
  std::
  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~unordered_map((unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* AssetsManagerManifest::isVersionLoaded() const */

AssetsManagerManifest __thiscall AssetsManagerManifest::isVersionLoaded(AssetsManagerManifest *this)

{
  return *this;
}


/* AssetsManagerManifest::isLoaded() const */

AssetsManagerManifest __thiscall AssetsManagerManifest::isLoaded(AssetsManagerManifest *this)

{
  return this[1];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::parseAsset(std::string const&, Sexy::StructuredData::Value const&) */

void AssetsManagerManifest::parseAsset(string *param_1,Value *param_2)

{
  bool bVar1;
  char cVar2;
  Asset AVar3;
  undefined4 uVar4;
  Value *this;
  Value *pVVar5;
  char *pcVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x2;
  size_t __n;
  undefined1 *__n_00;
  Asset *in_x8;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  Asset::Asset(in_x8);
  thunk_FUN_05475e00((string *)(in_x8 + 8),param_2);
  std::string::append((string *)in_x8,"",__n);
  in_x8[0x10] = (Asset)0x0;
  *(undefined4 *)(in_x8 + 0x14) = 0;
  this = (Value *)std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(in_x2);
  pVVar5 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)in_x2);
  for (; this != pVVar5; this = (Value *)Sexy::StructuredData::Value::Next(this)) {
    if (this != (Value *)0x0) {
      __n_00 = auStack_18;
      pcVar6 = (char *)FUN_043fab94(*(undefined8 *)(this + 8));
      std::string::string(asStack_10,pcVar6);
      nop();
      bVar1 = std::operator==(asStack_10,"md5");
      if ((bVar1) && (cVar2 = FUN_043fab98(*(undefined4 *)this), cVar2 != '\0')) {
        pcVar6 = (char *)FUN_043fabd0(*(undefined8 *)(this + 0x10));
        std::string::append((string *)in_x8,pcVar6,(size_t)__n_00);
      }
      else {
        bVar1 = std::operator==(asStack_10,"path");
        if ((bVar1) && (cVar2 = FUN_043fab98(*(undefined4 *)this), cVar2 != '\0')) {
          pcVar6 = (char *)FUN_043fabd0(*(undefined8 *)(this + 0x10));
          std::string::append((string *)(in_x8 + 8),pcVar6,(size_t)__n_00);
        }
        else {
          bVar1 = std::operator==(asStack_10,"compressed");
          if ((bVar1) && (cVar2 = FUN_043fabb0(*(undefined4 *)this), cVar2 != '\0')) {
            AVar3 = (Asset)FUN_043fabcc(this[0x10]);
            in_x8[0x10] = AVar3;
          }
          else {
            bVar1 = std::operator==(asStack_10,"downloadState");
            if ((bVar1) && (cVar2 = FUN_043faba4(*(undefined4 *)this), cVar2 != '\0')) {
              uVar4 = FUN_043fabc8(*(undefined8 *)(this + 0x10));
              *(undefined4 *)(in_x8 + 0x14) = uVar4;
            }
          }
        }
      }
      std::string::~string(asStack_10);
      pVVar5 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)in_x2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::setAssetDownloadState(std::string const&,
   AssetsManagerManifest::DownloadState const&) */

void __thiscall
AssetsManagerManifest::setAssetDownloadState
          (AssetsManagerManifest *this,string *param_1,DownloadState *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Value *this_01;
  Value *pVVar5;
  undefined8 uVar6;
  undefined8 local_18;
  Value *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
             ::find((unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                     *)(this + 0x90),param_1);
  local_10 = (Value *)FUN_043fb180();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_18);
    *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)param_2;
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::StructuredData::ValueForPath((StructuredData *)(this + 0xe0),"$.assets");
    if ((this_00 !=
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)0x0) && (cVar2 = FUN_043fabbc(*(undefined4 *)this_00), cVar2 != '\0')) {
      for (this_01 = (Value *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_rightmost(this_00); local_10 = this_01,
          pVVar5 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)this_00),
          this_01 != pVVar5; this_01 = (Value *)Sexy::StructuredData::Value::Next(this_01)) {
        if ((this_01 != (Value *)0x0) &&
           (cVar2 = FUN_043fabbc(*(undefined4 *)this_01), cVar2 != '\0')) {
          uVar6 = FUN_043fab94(*(undefined8 *)(this_01 + 8));
          iVar3 = FUN_0547490c(param_1,uVar6);
          this_01 = local_10;
          if (iVar3 == 0) {
            Sexy::StructuredData::SetInteger((Value **)(this + 0xe0),(char *)&local_10,0x5636390);
            break;
          }
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AssetsManagerManifest::getGroupVersion(std::string const&) const */

void __thiscall AssetsManagerManifest::getGroupVersion(AssetsManagerManifest *this,string *param_1)

{
  std::
  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::at((unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
        *)(this + 0x50),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::versionEquals(AssetsManagerManifest const*) const */

void __thiscall
AssetsManagerManifest::versionEquals(AssetsManagerManifest *this,AssetsManagerManifest *param_1)

{
  bool bVar1;
  bool bVar2;
  string *psVar3;
  vector *pvVar4;
  unordered_map *puVar5;
  ulong uVar6;
  ulong uVar7;
  string *psVar8;
  undefined8 uVar9;
  uint uVar10;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)
           Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
  bVar1 = std::operator!=((string *)(this + 0x28),psVar3);
  if (bVar1) {
    bVar1 = false;
  }
  else {
    pvVar4 = (vector *)GachaConfig::GetGachaPlantRewardList((GachaConfig *)param_1);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_58,pvVar4);
    puVar5 = (unordered_map *)Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)param_1);
    std::
    unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::unordered_map(auStack_40,puVar5);
    uVar6 = FUN_043fabd4(local_58,local_50);
    uVar9 = *(undefined8 *)(this + 0x38);
    uVar7 = FUN_043fabd4(uVar9,*(undefined8 *)(this + 0x40));
    if (uVar6 == uVar7) {
      for (uVar10 = 0; uVar6 = (ulong)uVar10, uVar6 < uVar7; uVar10 = uVar10 + 1) {
        uVar9 = FUN_043fabe0(uVar9,uVar6);
        FUN_05475d88(asStack_60,uVar9);
        psVar3 = (string *)FUN_043fabe8(local_58,uVar6);
        bVar2 = std::operator!=(asStack_60,psVar3);
        if (bVar2) {
LAB_043fbc6c:
          std::string::~string(asStack_60);
          goto LAB_043fbba0;
        }
        psVar3 = (string *)
                 std::
                 unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::at((unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                       *)(this + 0x50),asStack_60);
        psVar8 = (string *)
                 std::
                 unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::at(auStack_40,asStack_60);
        bVar2 = std::operator!=(psVar3,psVar8);
        if (bVar2) goto LAB_043fbc6c;
        std::string::~string(asStack_60);
        uVar9 = *(undefined8 *)(this + 0x38);
        uVar7 = FUN_043fabd4(uVar9,*(undefined8 *)(this + 0x40));
      }
      bVar1 = true;
      std::
      unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~unordered_map(auStack_40);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_58);
    }
    else {
LAB_043fbba0:
      std::
      unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~unordered_map(auStack_40);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* AssetsManagerManifest::clear() */

void __thiscall AssetsManagerManifest::clear(AssetsManagerManifest *this)

{
  size_t in_x2;
  
  if ((*this != (AssetsManagerManifest)0x0) || (this[1] != (AssetsManagerManifest)0x0)) {
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
    std::
    unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::clear((unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             *)(this + 0x50));
    std::string::append((string *)(this + 0x18),"",in_x2);
    std::string::append((string *)(this + 0x20),"",in_x2);
    std::string::append((string *)(this + 0x28),"",in_x2);
    std::string::append((string *)(this + 0x88),"",in_x2);
    *this = (AssetsManagerManifest)0x0;
    if (this[1] != (AssetsManagerManifest)0x0) {
      std::
      unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
      ::clear((unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
               *)(this + 0x90));
      std::vector<std::string,std::allocator<std::string>>::clear
                ((vector<std::string,std::allocator<std::string>> *)(this + 200));
      this[1] = (AssetsManagerManifest)0x0;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::genDiff(AssetsManagerManifest const*) const */

void AssetsManagerManifest::genDiff(AssetsManagerManifest *param_1)

{
  bool bVar1;
  char cVar2;
  unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
  *this;
  long lVar3;
  string *psVar4;
  AssetsManagerManifest *in_x1;
  unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
  *in_x8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [3];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
  ::unordered_map((ulong)in_x8,(hash *)0xa,(equal_to *)&local_38,(allocator *)&local_30);
  this = (unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
          *)getAssets(in_x1);
  std::__detail::
  _Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>::
  _Node_const_iterator
            ((_Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>
              *)&local_38);
  std::__detail::
  _Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>::
  _Node_const_iterator
            ((_Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>
              *)&local_30);
  local_30 = std::
             unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
             ::begin((unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                      *)(param_1 + 0x90));
  do {
    local_28[0] = FUN_043fb10c();
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_28);
    if (!bVar1) {
      local_30 = std::
                 unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                 ::begin(this);
      while( true ) {
        local_28[0] = FUN_043fb10c();
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_28);
        if (!bVar1) break;
        psVar4 = (string *)
                 std::__detail::
                 _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                 operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                             *)&local_30);
        local_38 = std::
                   unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                   ::find((unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                           *)(param_1 + 0x90),psVar4);
        local_28[0] = FUN_043fb0f8();
        cVar2 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_38,(exception_ptr *)local_28);
        if (cVar2 != '\0') {
          AssetDiff::AssetDiff((AssetDiff *)local_28);
          Asset::operator=((Asset *)local_28,(Asset *)(psVar4 + 8));
          local_10 = 0;
          std::
          unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
          ::emplace<std::string_const&,AssetsManagerManifest::AssetDiff&>
                    (in_x8,psVar4,(AssetDiff *)local_28);
          std::_Destroy<Sexy::PACommand>((PACommand *)local_28);
        }
        std::__detail::
        _Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>::
        operator++((_Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>
                    *)&local_30);
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar4 = (string *)
             std::__detail::
             _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
             operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                         *)&local_30);
    local_38 = std::
               unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
               ::find(this,psVar4);
    local_28[0] = FUN_043fb0f8();
    cVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_38,(exception_ptr *)local_28);
    if (cVar2 == '\0') {
      lVar3 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&local_38);
      bVar1 = std::operator!=(psVar4 + 8,(string *)(lVar3 + 8));
      if (bVar1) {
        AssetDiff::AssetDiff((AssetDiff *)local_28);
        Asset::operator=((Asset *)local_28,(Asset *)(lVar3 + 8));
        local_10 = 2;
        goto LAB_043fc90c;
      }
    }
    else {
      AssetDiff::AssetDiff((AssetDiff *)local_28);
      Asset::operator=((Asset *)local_28,(Asset *)(psVar4 + 8));
      local_10 = 1;
LAB_043fc90c:
      std::
      unordered_map<std::string,AssetsManagerManifest::AssetDiff,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::AssetDiff>>>
      ::emplace<std::string_const&,AssetsManagerManifest::AssetDiff&>
                (in_x8,psVar4,(AssetDiff *)local_28);
      std::_Destroy<Sexy::PACommand>((PACommand *)local_28);
    }
    std::__detail::
    _Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>::
    operator++((_Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>
                *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::genResumeAssetsList(std::unordered_map<std::string, DownloadUnit,
   std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<std::string const,
   DownloadUnit> > >*, std::string const&, std::string const&) const */

void __thiscall
AssetsManagerManifest::genResumeAssetsList
          (AssetsManagerManifest *this,unordered_map *param_1,string *param_2,string *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_60;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  Asset aAStack_38 [8];
  string asStack_30 [12];
  int local_24;
  undefined8 local_20;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_60 = std::
             unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
             ::begin((unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                      *)(this + 0x90));
  while( true ) {
    local_20 = FUN_043fb10c();
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_20);
    if (!bVar1) break;
    lVar2 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_60);
    Asset::Asset(aAStack_38,(Asset *)(lVar2 + 8));
    if (local_24 != 2) {
      Lua::DownloadInfo::DownloadInfo((DownloadInfo *)&local_20);
      uVar3 = std::__detail::
              _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
              operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                          *)&local_60);
      thunk_FUN_05475e00(asStack_10,uVar3);
      FUN_031dcc6c(asStack_58,param_2,param_3);
      std::operator+(asStack_58,"/");
      std::operator+(asStack_50,(string *)(this + 0x10));
      std::operator+(asStack_48,asStack_30);
      FUN_05474278((DownloadInfo *)&local_20,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      FUN_031dcc6c(asStack_40,this + 8,asStack_30);
      FUN_05474278(auStack_18,asStack_40);
      std::string::~string(asStack_40);
      std::
      unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
      ::emplace<std::string&,DownloadUnit&>
                ((unordered_map<std::string,DownloadUnit,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DownloadUnit>>>
                  *)param_1,asStack_10,(DownloadUnit *)&local_20);
      Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)&local_20);
    }
    Sexy::PACommand::~PACommand((PACommand *)aAStack_38);
    std::__detail::
    _Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>::
    operator++((_Node_const_iterator<std::pair<std::string_const,AssetsManagerManifest::Asset>,false,true>
                *)&local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::getSearchPaths() const */

void AssetsManagerManifest::getSearchPaths(void)

{
  uint uVar1;
  int iVar2;
  long in_x0;
  long lVar3;
  char *pcVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,(string *)(in_x0 + 8));
  uVar7 = *(undefined8 *)(in_x0 + 200);
  iVar2 = FUN_043fabd4(uVar7,*(undefined8 *)(in_x0 + 0xd0));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar5 = (long)(int)uVar1 + -1;
    lVar3 = (long)(int)uVar1;
    lVar6 = lVar5;
    while( true ) {
      uVar7 = FUN_043fabe0(uVar7,lVar3);
      FUN_05475d88(asStack_18,uVar7);
      lVar3 = FUN_05474178(asStack_18);
      if ((lVar3 != 0) && (pcVar4 = (char *)FUN_05474ee8(asStack_18,lVar3 + -1), *pcVar4 != '/')) {
        FUN_05475aa4(asStack_18,&DAT_055a4690);
      }
      FUN_031dcc6c(asStack_10,(string *)(in_x0 + 8),asStack_18);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_18);
      std::string::~string(asStack_18);
      if (lVar6 == lVar5 - (ulong)uVar1) break;
      uVar7 = *(undefined8 *)(in_x0 + 200);
      lVar3 = lVar6;
      lVar6 = lVar6 + -1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::loadVersion(Sexy::StructuredData const&, std::string const&) */

void __thiscall
AssetsManagerManifest::loadVersion
          (AssetsManagerManifest *this,StructuredData *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Value *this_01;
  Value *pVVar5;
  undefined1 *__n;
  double dVar6;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.remoteManifestUrl","");
  std::string::string(asStack_28,pcVar3);
  nop();
  lVar4 = FUN_05474184(asStack_28);
  if (lVar4 != 0) {
    thunk_FUN_05475e00(this + 0x18,asStack_28);
  }
  pcVar3 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.remoteVersionUrl","");
  std::string::string(asStack_20,pcVar3);
  nop();
  lVar4 = FUN_05474184(asStack_20);
  if (lVar4 != 0) {
    thunk_FUN_05475e00(this + 0x20,asStack_20);
  }
  bVar1 = std::operator==(param_2,"0");
  if (bVar1) {
    pcVar3 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.version","");
    std::string::string(asStack_10,pcVar3);
    nop();
    lVar4 = FUN_05474184(asStack_10);
    if (lVar4 != 0) {
      thunk_FUN_05475e00(this + 0x28,asStack_10);
    }
    std::string::~string(asStack_10);
  }
  else {
    thunk_FUN_05475e00(this + 0x28,param_2);
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::StructuredData::ValueForPath(param_1,"$.groupVersions");
  if ((this_00 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0) && (cVar2 = FUN_043fabbc(*(undefined4 *)this_00), cVar2 != '\0')) {
    this_01 = (Value *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_rightmost(this_00);
    pVVar5 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)this_00);
    for (; this_01 != pVVar5; this_01 = (Value *)Sexy::StructuredData::Value::Next(this_01)) {
      if (this_01 != (Value *)0x0) {
        pcVar3 = (char *)FUN_043fab94(*(undefined8 *)(this_01 + 8));
        std::string::string(asStack_18,pcVar3);
        nop();
        __n = auStack_30;
        std::string::string(asStack_10,"0");
        nop();
        cVar2 = FUN_043fab98(*(undefined4 *)this_01);
        if (cVar2 != '\0') {
          pcVar3 = (char *)FUN_043fabd0(*(undefined8 *)(this_01 + 0x10));
          std::string::append(asStack_10,pcVar3,(size_t)__n);
        }
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),asStack_18);
        std::
        unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
        ::emplace<std::string&,std::string&>
                  ((unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    *)(this + 0x50),asStack_18,asStack_10);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        pVVar5 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)this_00);
      }
    }
  }
  pcVar3 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.engineVersion","");
  std::string::string(asStack_10,pcVar3);
  nop();
  lVar4 = FUN_05474184(asStack_10);
  if (lVar4 != 0) {
    thunk_FUN_05475e00(this + 0x88,asStack_10);
  }
  dVar6 = (double)Sexy::StructuredData::NumberForPath(param_1,"$.totalfilesize",0.0);
  *this = (AssetsManagerManifest)0x1;
  *(float *)(this + 0x30) = (float)dVar6;
  std::string::~string(asStack_10);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::loadManifest(Sexy::StructuredData const&) */

void __thiscall
AssetsManagerManifest::loadManifest(AssetsManagerManifest *this,StructuredData *param_1)

{
  AssetsManagerManifest *pAVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Value *this_01;
  Value *pVVar5;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"0");
  loadVersion(this,param_1,asStack_20);
  std::string::~string(asStack_20);
  nop();
  pcVar3 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.packageUrl","");
  std::string::string(asStack_30,pcVar3);
  nop();
  lVar4 = FUN_05474184(asStack_30);
  if (lVar4 != 0) {
    pAVar1 = this + 0x10;
    thunk_FUN_05475e00(pAVar1,asStack_30);
    lVar4 = FUN_05474178(pAVar1);
    if ((lVar4 != 0) && (pcVar3 = (char *)FUN_05474ee8(pAVar1,lVar4 + -1), *pcVar3 != '/')) {
      FUN_05475aa4(pAVar1,&DAT_055a4690);
    }
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::StructuredData::ValueForPath(param_1,"$.assets");
  if ((this_00 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0) && (cVar2 = FUN_043fabbc(*(undefined4 *)this_00), cVar2 != '\0')) {
    this_01 = (Value *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_rightmost(this_00);
    pVVar5 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)this_00);
    for (; this_01 != pVVar5; this_01 = (Value *)Sexy::StructuredData::Value::Next(this_01)) {
      if ((this_01 != (Value *)0x0) && (cVar2 = FUN_043fabbc(*(undefined4 *)this_01), cVar2 != '\0')
         ) {
        pcVar3 = (char *)FUN_043fab94(*(undefined8 *)(this_01 + 8));
        std::string::string(asStack_28,pcVar3);
        nop();
        parseAsset((string *)this,(Value *)asStack_28);
        std::
        unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
        ::emplace<std::string_const&,AssetsManagerManifest::Asset&>
                  ((unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
                    *)(this + 0x90),asStack_28,(Asset *)asStack_20);
        Sexy::PACommand::~PACommand((PACommand *)asStack_20);
        std::string::~string(asStack_28);
        pVVar5 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)this_00);
      }
    }
  }
  this[1] = (AssetsManagerManifest)0x1;
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::loadJson(std::string const&) */

void __thiscall AssetsManagerManifest::loadJson(AssetsManagerManifest *this,string *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  string asStack_70 [8];
  Buffer aBStack_68 [48];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clear(this);
  Set8BytesTo0(asStack_70);
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,param_1);
  if (cVar1 == '\0') goto LAB_043fd944;
  Sexy::Buffer::Buffer(aBStack_68);
  Sexy::Buffer::Buffer(aBStack_38);
  cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                    ((string *)Sexy::gSexyAppBase,(Buffer *)param_1,SUB81(aBStack_68,0));
  if ((cVar1 != '\0') &&
     (cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                        ((string *)Sexy::gSexyAppBase,(Buffer *)param_1,SUB81(aBStack_38,0)),
     cVar1 != '\0')) {
    iVar2 = Sexy::Buffer::ReadInt32(aBStack_38);
    if (iVar2 == 0x50435344) {
      cVar1 = Sexy::StructuredData::ReadFromBuffer((StructuredData *)(this + 0xe0),aBStack_68);
joined_r0x043fda6c:
      if (cVar1 != '\0') goto LAB_043fd9ac;
    }
    else {
      uVar3 = FUN_05474eb0(asStack_70);
      uVar4 = Sexy::Buffer::GetDataPtr(aBStack_68);
      lVar5 = Sexy::Buffer::GetDataPtr(aBStack_68);
      iVar2 = Sexy::Buffer::GetDataLen(aBStack_68);
      std::string::insert<char*>(asStack_70,uVar3,uVar4,lVar5 + iVar2);
      lVar5 = FUN_05474178(asStack_70);
      if (lVar5 != 0) {
        cVar1 = StringHelper::ReadJson(asStack_70,(StructuredData *)(this + 0xe0));
        goto joined_r0x043fda6c;
      }
    }
    uVar3 = FUN_0547429c(param_1);
    Sexy::OutputDebugStrF((wchar_t *)"Fail to retrieve local file content: %s\n",uVar3);
  }
LAB_043fd9ac:
  Sexy::Buffer::~Buffer(aBStack_38);
  Sexy::Buffer::~Buffer(aBStack_68);
LAB_043fd944:
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AssetsManagerManifest::parseVersion(std::string const&, std::string const&) */

void __thiscall
AssetsManagerManifest::parseVersion(AssetsManagerManifest *this,string *param_1,string *param_2)

{
  loadJson(this,param_1);
  loadVersion(this,(StructuredData *)(this + 0xe0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::parse(std::string const&) */

void __thiscall AssetsManagerManifest::parse(AssetsManagerManifest *this,string *param_1)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  loadJson(this,param_1);
  lVar1 = FUN_0547468c(param_1,&DAT_05636100,0xffffffffffffffff);
  if (lVar1 != -1) {
    FUN_05475ffc(asStack_10,param_1,0,lVar1 + 1);
    FUN_05474278(this + 8,asStack_10);
    std::string::~string(asStack_10);
  }
  loadManifest(this,(StructuredData *)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::AssetsManagerManifest(std::string const&) */

void __thiscall
AssetsManagerManifest::AssetsManagerManifest(AssetsManagerManifest *this,string *param_1)

{
  long lVar1;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *this = (AssetsManagerManifest)0x0;
  this[1] = (AssetsManagerManifest)0x0;
  std::string::string((string *)(this + 8),"");
  nop();
  Set8BytesTo0(this + 0x10);
  std::string::string((string *)(this + 0x18),"");
  nop();
  std::string::string((string *)(this + 0x20),"");
  nop();
  std::string::string((string *)(this + 0x28),"");
  nop();
  *(undefined4 *)(this + 0x30) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::
  unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::unordered_map((ulong)(this + 0x50),(hash *)0xa,aeStack_20,aaStack_18);
  std::string::string((string *)(this + 0x88),"");
  nop();
  std::
  unordered_map<std::string,AssetsManagerManifest::Asset,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,AssetsManagerManifest::Asset>>>
  ::unordered_map((ulong)(this + 0x90),(hash *)0xa,aeStack_20,aaStack_18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  Sexy::StructuredData::StructuredData((StructuredData *)(this + 0xe0));
  lVar1 = FUN_05474178(param_1);
  if (lVar1 != 0) {
    parse(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AssetsManagerManifest::saveToFile(std::string const&) */

void __thiscall AssetsManagerManifest::saveToFile(AssetsManagerManifest *this,string *param_1)

{
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Buffer::Buffer(aBStack_38);
  Sexy::StructuredData::WriteToBuffer((StructuredData *)(this + 0xe0),aBStack_38);
  Sexy::SexyAppBase::WriteBufferToFile(Sexy::gSexyAppBase,param_1,aBStack_38);
  Sexy::Buffer::~Buffer(aBStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

