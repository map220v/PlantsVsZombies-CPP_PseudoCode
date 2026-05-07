// Class: EA::Text::FontServer


/* EA::Text::FontServer::SetOption(int, int) */

void __thiscall EA::Text::FontServer::SetOption(FontServer *this,int param_1,int param_2)

{
  if (param_1 < 10) {
    *(int *)(this + (long)param_1 * 4 + 0xc) = param_2;
  }
  return;
}


/* EA::Text::FontServer::GetOption(int) const */

undefined4 __thiscall EA::Text::FontServer::GetOption(FontServer *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(this + (long)param_1 * 4 + 0xc);
  }
  return uVar1;
}


/* EA::Text::FontServer::SetDefaultGlyphCache(EA::Text::GlyphCache*) */

void __thiscall EA::Text::FontServer::SetDefaultGlyphCache(FontServer *this,GlyphCache *param_1)

{
  *(GlyphCache **)(this + 0x49c8) = param_1;
  return;
}


/* EA::Text::FontServer::GetDefaultGlyphCache() */

undefined8 __thiscall EA::Text::FontServer::GetDefaultGlyphCache(FontServer *this)

{
  return *(undefined8 *)(this + 0x49c8);
}


/* EA::Text::FontServer::GetFontDescriptionScore(EA::Text::FontDescription const&,
   EA::Text::TextStyle const&) */

int __thiscall
EA::Text::FontServer::GetFontDescriptionScore
          (FontServer *this,FontDescription *param_1,TextStyle *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TextStyle *pTVar4;
  
  if (*(short *)param_2 != 0) {
    iVar3 = 0;
    pTVar4 = param_2;
    do {
      iVar2 = StdC::Stricmp((wchar16 *)param_1,(wchar16 *)pTVar4);
      if (iVar2 == 0) {
        bVar1 = true;
        iVar3 = iVar3 * -2 + 1000;
        goto LAB_0535a2f8;
      }
      pTVar4 = pTVar4 + 0x40;
      iVar3 = iVar3 + 1;
    } while (*(short *)pTVar4 != 0);
  }
  bVar1 = false;
  iVar3 = 900;
LAB_0535a2f8:
  if (*(float *)(param_1 + 0x40) == 0.0) {
    iVar3 = iVar3 + -10;
  }
  else {
    iVar3 = iVar3 - (int)(ABS(*(float *)(param_2 + 0x200) - *(float *)(param_1 + 0x40)) * 20.0);
  }
  if (*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x204)) {
    if ((*(int *)(param_1 + 0x44) - 1U < 2) && (*(int *)(param_2 + 0x204) - 1U < 2)) {
      iVar3 = iVar3 + -0x14;
    }
    else {
      iVar3 = iVar3 + -100;
    }
  }
  iVar3 = iVar3 - (int)(ABS(*(float *)(param_1 + 0x48) - *(float *)(param_2 + 0x208)) * 0.25);
  if (*(float *)(param_1 + 0x4c) != *(float *)(param_2 + 0x2ac)) {
    iVar3 = iVar3 - (int)((ABS(*(float *)(param_1 + 0x4c) - *(float *)(param_2 + 0x2ac)) + 1.0) *
                         20.0);
  }
  iVar2 = iVar3;
  if ((!bVar1) && (iVar2 = iVar3 + -0x96, *(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x210))) {
    iVar2 = iVar3;
  }
  iVar3 = iVar2 + -0x32;
  if (*(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x20c)) {
    iVar3 = iVar2;
  }
  iVar2 = iVar3 + -5;
  if (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x214)) {
    iVar2 = iVar3;
  }
  return iVar2;
}


/* EA::Text::FontServer::AddFace(char16_t const*, EA::Text::FontType, EA::Text::FontDescription*) */

undefined4 __thiscall
EA::Text::FontServer::AddFace(FontServer *this,wchar16 *param_1,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  EATextFileStream *this_00;
  
  if ((param_3 != 0) || (param_3 = GetFontTypeFromFilePath(param_1), param_3 != 0)) {
    this_00 = (EATextFileStream *)FUN_0535a8ec(0xe0,*(undefined8 *)(this + 0x38));
    IO::EATextFileStream::EATextFileStream(this_00,param_1);
    if (this_00 != (EATextFileStream *)0x0) {
      uVar2 = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      *(undefined8 *)(this_00 + 0xd8) = *(undefined8 *)(this + 0x38);
      cVar1 = (**(code **)(*(long *)this_00 + 0xc0))(this_00,1,6,1,0);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*(long *)this + 0x68))(this,this_00,param_3,param_4);
      }
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      return uVar2;
    }
  }
  return 0;
}


/* EA::Text::FontServer::CreateNewFont(int) */

BmpFont * __thiscall EA::Text::FontServer::CreateNewFont(FontServer *this,int param_1)

{
  BmpFont *this_00;
  
  if (param_1 == 2) {
    this_00 = (BmpFont *)FUN_0535a8ec(1000,*(undefined8 *)(this + 0x38));
    OutlineFont::OutlineFont((OutlineFont *)this_00,*(ICoreAllocator **)(this + 0x38));
  }
  else if (param_1 == 4) {
    this_00 = (BmpFont *)FUN_0535a8ec(0x208,*(undefined8 *)(this + 0x38));
    PolygonFont::PolygonFont((PolygonFont *)this_00,*(ICoreAllocator **)(this + 0x38));
  }
  else {
    if (param_1 != 1) {
      return (BmpFont *)0x0;
    }
    this_00 = (BmpFont *)FUN_0535a8ec(0x260,*(undefined8 *)(this + 0x38));
    BmpFont::BmpFont(this_00,*(ICoreAllocator **)(this + 0x38));
  }
  if (this_00 == (BmpFont *)0x0) {
    return (BmpFont *)0x0;
  }
  (**(code **)(*(long *)this_00 + 0x18))(this_00);
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::Init() */

void __thiscall EA::Text::FontServer::Init(FontServer *this)

{
  EATextMemoryStream *this_00;
  long lVar1;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x5110));
  if (this[8] == (FontServer)0x0) {
    this[8] = (FontServer)0x1;
    this_00 = (EATextMemoryStream *)FUN_0535a8ec(0x60,*(undefined8 *)(this + 0x38));
    IO::EATextMemoryStream::EATextMemoryStream
              (this_00,&DAT_0575fcf0,0x67c0,true,false,*(ICoreAllocator **)(this + 0x38));
    if (this_00 != (EATextMemoryStream *)0x0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      lVar1 = *(long *)this;
      *(undefined8 *)(this_00 + 0x58) = *(undefined8 *)(this + 0x38);
      (**(code **)(lVar1 + 0x68))(this,this_00,2,0);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
  }
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* EA::Text::FontServer::SetAllocator(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::FontServer::SetAllocator(FontServer *this,ICoreAllocator *param_1)

{
  undefined8 uVar1;
  
  *(ICoreAllocator **)(this + 0x38) = param_1;
  uVar1 = eastl::
          fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          ::get_overflow_allocator
                    ((fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                      *)(this + 0x300));
  FUN_0535a4d0(uVar1,param_1);
  uVar1 = eastl::
          fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          ::get_overflow_allocator();
  FUN_0535a4d0(uVar1,param_1);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x4a40));
  FUN_0535a4d0(uVar1,param_1);
  uVar1 = eastl::
          fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          ::get_overflow_allocator
                    ((fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                      *)(this + 0x4eb8));
  FUN_0535a4d0(uVar1,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::EnumerateFonts(EA::Text::FontDescription*, unsigned int) */

void __thiscall
EA::Text::FontServer::EnumerateFonts(FontServer *this,FontDescription *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  AutoFutex aAStack_38 [8];
  undefined8 local_30;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_38,(Futex *)(this + 0x5110));
  uVar7 = 0;
  iVar8 = 0;
  FUN_0535b070((hashtable_iterator *)local_18,*(undefined8 *)(this + 0x308));
  eastl::
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)local_28,(hashtable_iterator *)local_18);
  while( true ) {
    FUN_0535aff4((hashtable_iterator *)local_18,*(undefined8 *)(this + 0x308),
                 *(undefined8 *)(this + 0x310));
    uVar2 = local_28[0];
    cVar3 = FUN_0535a504(local_28[0],local_18[0]);
    if (cVar3 == '\0') break;
    lVar5 = FUN_0535a54c(uVar2);
    local_30 = FUN_0535b15c(*(TaskResource **)(lVar5 + 0x68));
    while( true ) {
      local_18[0] = std::
                    __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                              ((TaskResource **)(lVar5 + 0x68));
      bVar4 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
      if (!bVar4) break;
      lVar6 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                        ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_30);
      if (uVar7 < param_2) {
        uVar1 = (ulong)uVar7;
        uVar7 = uVar7 + 1;
        memcpy(param_1 + uVar1 * 0x74,(void *)(lVar6 + 0xc),0x74);
      }
      iVar8 = iVar8 + 1;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_30);
    }
    eastl::
    hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
    ::operator++((hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
                  *)local_28);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::GetEffect(unsigned int, EA::Text::EffectsInstructionWord const*&, unsigned
   int&) const */

void __thiscall
EA::Text::FontServer::GetEffect
          (FontServer *this,uint param_1,EffectsInstructionWord **param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0535b3d4(*(undefined8 *)(this + 0x4a40));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(this + 0x4a40));
  do {
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
      *param_2 = (EffectsInstructionWord *)0x0;
      *param_3 = 0;
LAB_0535b4b8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar3 = (uint *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if (*puVar3 == param_1) {
      uVar1 = puVar3[0x29];
      *param_2 = (EffectsInstructionWord *)(puVar3 + 1);
      *param_3 = uVar1;
      goto LAB_0535b4b8;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::RemoveEffect(unsigned int) */

void __thiscall EA::Text::FontServer::RemoveEffect(FontServer *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined1 auStack_30 [24];
  _List_const_iterator<Sexy::ActiveFontLayer> a_Stack_18 [8];
  generic_iterator<EA::Text::TextureInfo**,void> agStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0535b3ac(a_Stack_18,*(undefined8 *)(this + 0x4a40));
  do {
    eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
    ::end();
    bVar1 = eastl::operator!=((rbtree_iterator *)a_Stack_18,(rbtree_iterator *)agStack_10);
    if (!bVar1) {
LAB_0535bf7c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (uint *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(a_Stack_18);
    if (param_1 == *puVar2) {
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                (agStack_10,(TextureInfo ***)a_Stack_18);
      eastl::
      list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::erase(auStack_30,this + 0x4a40,agStack_10);
      goto LAB_0535bf7c;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)a_Stack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::AddDirectory(char16_t const*, char16_t const*) */

void __thiscall
EA::Text::FontServer::AddDirectory(FontServer *this,wchar16 *param_1,wchar16 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  long lVar6;
  wchar_t *pwVar7;
  int iVar8;
  uint local_e6c;
  wchar16 *local_e68 [2];
  AutoFutex aAStack_e58 [8];
  _List_const_iterator<Sexy::ActiveFontLayer> a_Stack_e50 [8];
  EAIOEASTLCoreAllocator aEStack_e48 [16];
  DirectoryIterator aDStack_e38 [32];
  undefined8 local_e18 [5];
  wchar16 local_df0 [28];
  undefined8 local_db8 [54];
  wchar16 awStack_c08 [512];
  wchar16 awStack_808 [512];
  undefined8 local_408 [127];
  undefined2 local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_e68[0] = param_2;
  Thread::AutoFutex::AutoFutex(aAStack_e58,(Futex *)(this + 0x5110));
  if (param_1 == (wchar16 *)0x0) {
    param_1 = awStack_c08;
    local_e6c = GetSystemFontDirectory(param_1,0x200);
  }
  else {
    local_e6c = StdC::Strlen(param_1);
  }
  iVar8 = 0;
  if (local_e6c - 1 < 0x1fe) {
    IO::DirectoryIterator::DirectoryIterator(aDStack_e38);
    Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator(aEStack_e48,(char *)0x0);
    eastl::
    list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::list((list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)local_e18,(CoreAllocatorAdapter *)aEStack_e48);
    memset(awStack_808,0,0x400);
    builtin_memcpy(local_df0,L"*.tt?,*.otf,*.bmpFont,*.ffs",0x38);
    if (local_e68[0] == (wchar16 *)0x0) {
      local_e68[0] = local_df0;
    }
    uVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)local_e18);
    FUN_0535a4c4(uVar4,*(undefined8 *)(this + 0x38));
    while (cVar1 = StdC::SplitTokenDelimited
                             (local_e68[0],0xffffffff,L',',awStack_808,0x200,local_e68),
          cVar1 != '\0') {
      IO::Path::PathStringW::PathStringW((PathStringW *)local_db8);
      IO::Path::PathStringW::PathStringW((PathStringW *)local_408);
      IO::ConvertPath((PathStringW *)local_db8,param_1);
      IO::ConvertPath((PathStringW *)local_408,awStack_808);
      pwVar7 = (wchar_t *)FUN_0535a554(local_db8[0]);
      pwVar5 = (wchar_t *)FUN_0535a554(local_408[0]);
      IO::DirectoryIterator::ReadRecursive
                (aDStack_e38,pwVar7,(list *)local_e18,pwVar5,2,true,false,0x100000,true);
      IO::Path::PathString32::~PathString32((PathString32 *)local_408);
      IO::Path::PathString32::~PathString32((PathString32 *)local_db8);
    }
    iVar8 = 0;
    cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                      ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                       local_e18);
    if (cVar1 == '\0') {
      StdC::Strlcpy((wchar16 *)local_408,param_1,0x200);
      cVar1 = IO::IsFilePathSeparator
                        ((uint)(ushort)*(wchar16 *)((long)local_408 + (ulong)(local_e6c - 1) * 2));
      if (cVar1 == '\0') {
        *(wchar16 *)((long)local_408 + (ulong)local_e6c * 2) = L'/';
        local_e6c = local_e6c + 1;
      }
      iVar8 = 0;
      FUN_0535b338(a_Stack_e50,local_e18[0]);
      while( true ) {
        eastl::
        list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
        end();
        bVar2 = eastl::operator!=((rbtree_iterator *)a_Stack_e50,(rbtree_iterator *)aEStack_e48);
        if (!bVar2) break;
        lVar6 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(a_Stack_e50);
        pwVar7 = (wchar_t *)FUN_0535a4cc(*(undefined8 *)(lVar6 + 8));
        StdC::Strlcpy((wchar16 *)((long)local_408 + (ulong)local_e6c * 2),pwVar7,
                      (ulong)(0x200 - local_e6c),0xffffffffffffffff);
        local_a = 0;
        iVar3 = (**(code **)(*(long *)this + 0x70))(this,local_408,0,0);
        iVar8 = iVar8 + iVar3;
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)a_Stack_e50);
      }
    }
    eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::~list
              ((list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *)
               local_e18);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_e58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::FreeUnusedFonts() */

void __thiscall EA::Text::FontServer::FreeUnusedFonts(FontServer *this)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  AutoFutex aAStack_58 [8];
  rbtree_iterator arStack_50 [8];
  rbtree_iterator arStack_48 [8];
  undefined8 local_40;
  rbtree_iterator arStack_38 [8];
  generic_iterator<EA::Text::TextureInfo**,void> agStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_58,(Futex *)(this + 0x5110));
  iVar9 = 0;
  FUN_0535b070((hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
                *)local_28,*(undefined8 *)(this + 0x308));
  do {
    FUN_0535aff4(local_18,*(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x310));
    uVar1 = local_28[0];
    cVar2 = FUN_0535a504(local_28[0],local_18[0]);
    if (cVar2 == '\0') {
      Thread::AutoFutex::~AutoFutex(aAStack_58);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar9);
    }
    lVar5 = FUN_0535a510(uVar1);
    FUN_0535b01c(arStack_50,*(undefined8 *)(lVar5 + 0x68));
    eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
    ::end();
    bVar3 = eastl::operator!=(arStack_50,arStack_48);
    if (bVar3) {
      do {
        lVar5 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                          ((_List_const_iterator<Sexy::ActiveFontLayer> *)arStack_50);
        FUN_0535ae5c((rbtree_iterator *)&local_40,*(undefined8 *)(lVar5 + 0x88));
        eastl::
        list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
        end();
        while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_40,arStack_38), bVar3) {
          while( true ) {
            puVar6 = (undefined8 *)
                     std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_40);
            plVar8 = (long *)*puVar6;
            iVar4 = (**(code **)(*plVar8 + 0x18))(plVar8);
            if (iVar4 != 2) break;
            plVar7 = *(long **)(this + 0x49c8);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x58))(plVar7,plVar8);
            }
            iVar9 = iVar9 + 1;
            (**(code **)(*plVar8 + 0x20))(plVar8);
            (**(code **)(*plVar8 + 0x20))(plVar8);
            eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                      (agStack_30,(TextureInfo ***)&local_40);
            eastl::
            list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            ::erase(local_18,(undefined8 *)(lVar5 + 0x88),agStack_30);
            local_40 = local_18[0];
            bVar3 = eastl::operator!=((rbtree_iterator *)&local_40,arStack_38);
            if (!bVar3) goto LAB_0535c8bc;
          }
          (**(code **)(*plVar8 + 0x20))(plVar8);
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_40);
        }
LAB_0535c8bc:
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)arStack_50);
        bVar3 = eastl::operator!=(arStack_50,arStack_48);
      } while (bVar3);
    }
    eastl::
    hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
    ::operator++((hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
                  *)local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::Shutdown() */

void __thiscall EA::Text::FontServer::Shutdown(FontServer *this)

{
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x5110));
  eastl::
  hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)(this + 0x300));
  eastl::
  list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::clear((list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x4a40));
  this[8] = (FontServer)0x0;
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::RemoveFace(char16_t const*) */

void __thiscall EA::Text::FontServer::RemoveFace(FontServer *this,wchar16 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  AutoFutex aAStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_50,(Futex *)(this + 0x5110));
  iVar7 = 0;
  FUN_0535b070((hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
                *)local_38,*(undefined8 *)(this + 0x308));
  while( true ) {
    FUN_0535aff4((rbtree_iterator *)local_18,*(undefined8 *)(this + 0x308),
                 *(undefined8 *)(this + 0x310));
    uVar1 = local_38[0];
    cVar2 = FUN_0535a504(local_38[0],local_18[0]);
    if (cVar2 == '\0') break;
    lVar5 = FUN_0535a510(uVar1);
    iVar4 = StdC::Stricmp((wchar16 *)(lVar5 + 0x28),param_1);
    if (iVar4 == 0) {
      if (*(long *)(this + 0x49c8) != 0) {
        local_48 = FUN_0535b15c(*(TaskResource **)(lVar5 + 0x68));
        local_40 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(lVar5 + 0x68));
        bVar3 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
        if (bVar3) {
          do {
            lVar5 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                              ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_48);
            local_28[0] = FUN_0535b360(*(TaskResource **)(lVar5 + 0x88));
            local_18[0] = std::
                          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                                    ((TaskResource **)(lVar5 + 0x88));
            while (bVar3 = eastl::operator!=((rbtree_iterator *)local_28,(rbtree_iterator *)local_18
                                            ), bVar3) {
              puVar6 = (undefined8 *)
                       std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)local_28);
              (**(code **)(**(long **)(this + 0x49c8) + 0x58))(*(long **)(this + 0x49c8),*puVar6);
              std::_List_const_iterator<Sexy::FontLayer>::operator++
                        ((_List_const_iterator<Sexy::FontLayer> *)local_28);
            }
            std::_List_const_iterator<Sexy::FontLayer>::operator++
                      ((_List_const_iterator<Sexy::FontLayer> *)&local_48);
            bVar3 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
          } while (bVar3);
        }
      }
      iVar7 = iVar7 + 1;
      eastl::
      hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
      ::hashtable_iterator
                ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                  *)local_28,(hashtable_iterator *)local_38);
      eastl::
      hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
      ::erase((rbtree_iterator *)local_18,this + 0x300,
              (_List_const_iterator<Sexy::ActiveFontLayer> *)local_28);
      local_38[0] = local_18[0];
    }
    else {
      eastl::
      hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
      ::operator++((hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
                    *)local_38);
    }
  }
  Thread::AutoFutex::~AutoFutex(aAStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* EA::Text::FontServer::~FontServer() */

void __thiscall EA::Text::FontServer::~FontServer(FontServer *this)

{
  *(undefined ***)this = &PTR__FontServer_06a36730;
  Shutdown(this);
  Thread::Futex::~Futex((Futex *)(this + 0x5110));
  eastl::
  fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~fixed_hash_map((fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     *)(this + 0x4eb8));
  eastl::
  fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>
  ::~fixed_hash_set((fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>
                     *)(this + 0x4a70));
  eastl::
  list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~list((list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x4a40));
  eastl::
  fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~fixed_vector((fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *)(this + 0x49d0));
  eastl::
  fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,8ul,9ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~fixed_hash_map((fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,8ul,9ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     *)(this + 0x300));
  return;
}


/* EA::Text::FontServer::~FontServer() */

void __thiscall EA::Text::FontServer::~FontServer(FontServer *this)

{
  ~FontServer(this);
  AK::FreeHook(this);
  return;
}


/* EA::Text::FontServer::AddEffect(unsigned int, EA::Text::EffectsInstructionWord const*, unsigned
   int) */

void __thiscall
EA::Text::FontServer::AddEffect
          (FontServer *this,uint param_1,EffectsInstructionWord *param_2,uint param_3)

{
  uint *puVar1;
  
  RemoveEffect(this,param_1);
  eastl::
  list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::push_back((list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x4a40));
  puVar1 = (uint *)FUN_0535a558(*(undefined8 *)(this + 0x4a48));
  *puVar1 = param_1;
  memcpy(puVar1 + 1,param_2,(ulong)param_3 << 2);
  puVar1[0x29] = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::FontServer(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::FontServer::FontServer(FontServer *this,ICoreAllocator *param_1)

{
  long *plVar1;
  CharHash aCStack_70 [8];
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_68 [24];
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[8] = (FontServer)0x0;
  *(undefined ***)this = &PTR__FontServer_06a36730;
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  *(ICoreAllocator **)(this + 0x38) = param_1;
  TextStyle::TextStyle((TextStyle *)(this + 0x40));
  plVar1 = (long *)&local_50;
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_68,"EAText/FontServer/FaceMap",*(ICoreAllocator **)(this + 0x38));
  eastl::
  fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,8ul,9ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_hash_map((fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,EA::Text::FontServer::Face,8ul,9ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)(this + 0x300),(CoreAllocatorAdapter *)aCStack_68);
  *(undefined8 *)(this + 0x49c8) = 0;
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_68,"EAText/FontServer/FaceArray",*(ICoreAllocator **)(this + 0x38));
  eastl::
  fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_vector((fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *)(this + 0x49d0),(CoreAllocatorAdapter *)aCStack_68);
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_68,"EAText/FontServer/EffectDataList",*(ICoreAllocator **)(this + 0x38));
  eastl::
  list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::list((list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *)(this + 0x4a40),(CoreAllocatorAdapter *)aCStack_68);
  *(undefined4 *)(this + 0x4a68) = 0x60;
  eastl::
  fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>
  ::fixed_hash_set((fixed_hash_set<char16_t,41ul,41ul,false,EA::Text::FontServer::CharHash,eastl::equal_to<char16_t>,false,eastl::allocator>
                    *)(this + 0x4a70),aCStack_70,(equal_to *)aCStack_68);
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_68,"EAText/FontServer/FamilySubstitutionMap",*(ICoreAllocator **)(this + 0x38))
  ;
  eastl::
  fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_hash_map((fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)(this + 0x4eb8),(CoreAllocatorAdapter *)aCStack_68);
  Thread::Futex::Futex((Futex *)(this + 0x5110));
  *(undefined4 *)(this + 0x2c) = 0;
  local_4e = 8;
  local_4c = 9;
  local_4a = 10;
  local_48 = 0xb;
  local_32 = 0x200f;
  local_46 = 0xc;
  local_30 = 0x2028;
  local_44 = 0xd;
  local_2e = 0x2029;
  local_42 = 0x1b;
  local_2c = 0x202a;
  local_40 = 0x85;
  local_2a = 0x202b;
  local_3e = 0xa0;
  local_28 = 0x202c;
  local_3c = 0x34f;
  local_26 = 0x202d;
  local_3a = 0x200b;
  local_24 = 0x202e;
  local_38 = 0x200c;
  local_36 = 0x200d;
  local_22 = 0x2060;
  local_34 = 0x200e;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0;
  local_50 = 0;
  local_20 = 0x206a;
  local_1e = 0x206b;
  local_1c = 0x206c;
  local_1a = 0x206d;
  local_18 = 0x206e;
  local_16 = 0x206f;
  local_10 = 0xfeff;
  local_14 = 0xfffc;
  local_e = 0xfeff;
  local_12 = 0xfffd;
  local_c = 0xfffe;
  local_a = 0xffff;
  do {
    plVar1 = (long *)((long)plVar1 + 2);
    eastl::
    hashtable<char16_t,char16_t,eastl::fixed_hashtable_allocator<42ul,16ul,41ul,2ul,0ul,false,eastl::allocator>,eastl::use_self<char16_t>,eastl::equal_to<char16_t>,EA::Text::FontServer::CharHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,false,true>
    ::insert((wchar16 *)(this + 0x4a70));
  } while (plVar1 != &local_8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::AddSubstitution(char16_t const*, char16_t const*) */

void __thiscall
EA::Text::FontServer::AddSubstitution(FontServer *this,wchar16 *param_1,wchar16 *param_2)

{
  char cVar1;
  CoreAllocatorAdapter *pCVar2;
  ulong uVar3;
  AutoFutex aAStack_c0 [8];
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_58 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_c0,(Futex *)(this + 0x5110));
  pCVar2 = (CoreAllocatorAdapter *)
           eastl::
           fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::get_overflow_allocator
                     ((fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       *)(this + 0x4eb8));
  eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)&local_a8,param_1,pCVar2);
  FUN_0535aa58(local_a8,local_a0);
  uVar3 = FUN_0535a560(local_a8,local_a0);
  if (uVar3 < 0x20) {
    eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)&local_80,param_2,pCVar2);
    FUN_0535aa58(local_80,local_78);
    uVar3 = FUN_0535a560(local_80,local_78);
    if (uVar3 < 0x20) {
      FUN_0535e040((pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                    *)local_58,*(undefined8 *)(this + 0x4ec0),*(undefined8 *)(this + 0x4ec8),
                   (basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)&local_a8);
      eastl::
      hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
      ::hashtable_iterator
                ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                  *)local_b8,(hashtable_iterator *)local_58);
      FUN_0535afcc((pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                    *)local_58,*(undefined8 *)(this + 0x4ec0),*(undefined8 *)(this + 0x4ec8));
      cVar1 = FUN_0535a56c(local_b8[0],local_58[0]);
      if (cVar1 != '\0') {
        eastl::
        pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        ::pair((pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                *)local_58,(basic_string *)&local_a8,(basic_string *)&local_80);
        eastl::
        hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        ::insert((pair *)(this + 0x4eb8));
        eastl::
        pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        ::~pair((pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                 *)local_58);
      }
    }
    eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::~basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     *)&local_80);
  }
  eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)&local_a8);
  Thread::AutoFutex::~AutoFutex(aAStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::AddFont(EA::Text::Font*, EA::Text::FontDescription*) */

void __thiscall
EA::Text::FontServer::AddFont(FontServer *this,Font *param_1,FontDescription *param_2)

{
  char cVar1;
  undefined1 uVar2;
  Font *local_1e8;
  AutoFutex aAStack_1e0 [8];
  FontDescription aFStack_1d8 [120];
  long *local_160;
  undefined4 local_158;
  undefined1 auStack_154 [116];
  undefined1 local_e0;
  list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  alStack_d8 [208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1e8 = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_1e0,(Futex *)(this + 0x5110));
  FontDescription::FontDescription(aFStack_1d8);
  if ((local_1e8 == (Font *)0x0) ||
     (cVar1 = (**(code **)(*(long *)local_1e8 + 0x60))(local_1e8,aFStack_1d8), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    FaceSource::FaceSource((FaceSource *)&local_160,*(ICoreAllocator **)(this + 0x38));
    local_160 = (long *)(**(code **)(*(long *)local_1e8 + 0x38))(local_1e8);
    local_158 = (**(code **)(*(long *)local_1e8 + 0x58))(local_1e8);
    memcpy(auStack_154,aFStack_1d8,0x74);
    local_e0 = 0;
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x10))();
    }
    (**(code **)(*(long *)local_1e8 + 0x18))(local_1e8);
    eastl::
    list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
    ::push_back(alStack_d8,&local_1e8);
    uVar2 = (**(code **)(*(long *)this + 0xa0))(this,(FaceSource *)&local_160,param_2);
    FaceSource::~FaceSource((FaceSource *)&local_160);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_1e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::CreateNewFont(EA::Text::FontServer::FaceSource*, EA::Text::TextStyle
   const&, bool) */

void __thiscall
EA::Text::FontServer::CreateNewFont
          (FontServer *this,FaceSource *param_1,TextStyle *param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  wchar16 *pwVar6;
  EATextFileStream *this_00;
  OutlineFont *this_01;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  Font *local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_8;
  
  iVar3 = *(int *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  local_140 = (Font *)0x0;
  if (iVar3 == 2) {
    this_01 = (OutlineFont *)CreateNewFont(this,2);
    if (this_01 == (OutlineFont *)0x0) goto LAB_0535f5e4;
    OutlineFont::SetFaceData(this_01,*(FaceData **)(param_1 + 0x150));
    if (*(int *)(this + 0x10) != -1) {
      (**(code **)(*(long *)this_01 + 0x48))(this_01,1);
    }
    if (*(int *)(this + 0x14) != -1) {
      (**(code **)(*(long *)this_01 + 0x48))(this_01,2);
    }
    if (*(int *)(this + 0x18) != -1) {
      (**(code **)(*(long *)this_01 + 0x48))(this_01,3);
    }
    if (*(int *)(this + 0x1c) != -1) {
      (**(code **)(*(long *)this_01 + 0x48))(this_01,4);
    }
    if (*(int *)(this + 0x20) != -1) {
      (**(code **)(*(long *)this_01 + 0x48))(this_01,5);
    }
    cVar2 = (**(code **)(*(long *)this_01 + 200))(this_01,*(undefined8 *)param_1,param_1[0x80]);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this_01 + 0xa8))(*(undefined4 *)(param_2 + 0x200),0,0,this_01);
      (**(code **)(*(long *)this_01 + 0xd8))(this_01,*(undefined4 *)(param_2 + 0x214));
      if (*(int *)(param_2 + 0x218) != 0) {
        (**(code **)(*(long *)this_01 + 0xe0))
                  (*(undefined4 *)(param_2 + 0x21c),*(undefined4 *)(param_2 + 0x220),this_01,
                   *(int *)(param_2 + 0x218),*(undefined4 *)(param_2 + 0x270),
                   *(undefined4 *)(param_2 + 0x274),*(undefined4 *)(param_2 + 0x278));
      }
    }
LAB_0535f5c4:
    local_140 = (Font *)this_01;
    if (cVar2 != '\0') goto LAB_0535f5d0;
  }
  else {
    if (iVar3 == 1) {
      this_01 = (OutlineFont *)CreateNewFont(this,1);
      if (this_01 != (OutlineFont *)0x0) {
        if (*(int *)(this + 0x24) != -1) {
          (**(code **)(*(long *)this_01 + 0x48))(this_01,6);
        }
        if (*(int *)(this + 0x28) != -1) {
          (**(code **)(*(long *)this_01 + 0x48))(this_01,7);
        }
        lVar5 = (**(code **)(*(long *)this_01 + 0xd0))(this_01);
        if (lVar5 == 0) {
          (**(code **)(*(long *)this_01 + 0xd8))(this_01,*(undefined8 *)(this + 0x49c8));
        }
        cVar2 = (**(code **)(*(long *)this_01 + 200))(this_01,param_1,1);
        if (cVar2 != '\0') {
          eastl::fixed_string<char16_t,129,true,eastl::allocator>::fixed_string
                    ((fixed_string<char16_t,129,true,eastl::allocator> *)&local_138);
          lVar5 = (**(code **)(*(long *)this_01 + 0xe8))(this_01,0);
          iVar3 = (**(code **)(**(long **)param_1 + 0x20))(*(long **)param_1);
          if ((iVar3 == 0x34722300) && (lVar5 != 0)) {
            pwVar6 = (wchar16 *)FUN_0535a550(*(undefined8 *)(lVar5 + 0x150));
            lVar7 = IO::Path::GetFileName(pwVar6,(wchar16 *)0x0);
            lVar5 = FUN_0535a550(*(undefined8 *)(lVar5 + 0x150));
            if (lVar7 == lVar5) {
              plVar9 = *(long **)param_1;
              eastl::
              basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
              ::resize((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
                        *)&local_138,0x400);
              uVar8 = FUN_0535a8e8(local_138);
              (**(code **)(*plVar9 + 0xa8))(plVar9,uVar8,0x400);
              pwVar6 = (wchar16 *)FUN_0535a550(local_138);
              lVar5 = IO::Path::GetFileName(pwVar6,(wchar16 *)0x0);
              lVar7 = FUN_0535a550(local_138);
              eastl::
              basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
              ::resize((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
                        *)&local_138,lVar5 - lVar7 >> 1);
            }
          }
          iVar3 = 0;
          iVar4 = (**(code **)(*(long *)this_01 + 0xe0))(this_01);
          if (iVar4 != 0) {
            do {
              lVar5 = (**(code **)(*(long *)this_01 + 0xe8))(this_01,iVar3);
              if (lVar5 != 0) {
                FUN_0535b744(lVar5 + 0x150,local_138,local_130);
                pwVar6 = (wchar16 *)FUN_0535a550(*(undefined8 *)(lVar5 + 0x150));
                this_00 = (EATextFileStream *)FUN_0535a8ec(0xe0,*(undefined8 *)(this + 0x38));
                IO::EATextFileStream::EATextFileStream(this_00,pwVar6);
                if (this_00 != (EATextFileStream *)0x0) {
                  (**(code **)(*(long *)this_00 + 0x10))(this_00);
                  *(undefined8 *)(this_00 + 0xd8) = *(undefined8 *)(this + 0x38);
                  cVar1 = (**(code **)(*(long *)this_00 + 0xc0))(this_00,1,6,1,0);
                  if (cVar1 != '\0') {
                    (**(code **)(*(long *)this_01 + 0x100))(this_01,this_00,iVar3);
                  }
                  (**(code **)(*(long *)this_00 + 0x18))(this_00);
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != iVar4);
          }
          eastl::fixed_string<char16_t,129,true,eastl::allocator>::~fixed_string
                    ((fixed_string<char16_t,129,true,eastl::allocator> *)&local_138);
        }
        goto LAB_0535f5c4;
      }
    }
    else {
      if (iVar3 != 4) goto LAB_0535f4b4;
      this_01 = (OutlineFont *)CreateNewFont(this,4);
      if ((this_01 == (OutlineFont *)0x0) ||
         (cVar2 = (**(code **)(*(long *)this_01 + 200))(this_01,*(undefined8 *)param_1),
         cVar2 == '\0')) goto LAB_0535f5e4;
LAB_0535f5d0:
      local_140 = (Font *)this_01;
      (**(code **)(*(long *)this_01 + 0x18))(this_01);
      if (param_3) {
        (**(code **)(*(long *)local_140 + 0x18))(local_140);
        eastl::
        list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        ::push_back((list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                     *)(param_1 + 0x88),&local_140);
      }
    }
LAB_0535f5e4:
    if (local_140 == (Font *)0x0) goto LAB_0535f4b4;
  }
  (**(code **)(*(long *)local_140 + 0x20))(local_140);
LAB_0535f4b4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_140);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::GetFont(EA::Text::TextStyle const*,
   eastl::fixed_set<EA::Text::AutoRefCount<EA::Text::Font>, 8ul, true,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::allocator>&, unsigned int, char16_t,
   EA::Text::Script, bool) */

void EA::Text::FontServer::GetFont
               (long *param_1,undefined8 param_2,AutoRefCount *param_3,uint param_4)

{
  Font **ppFVar1;
  undefined8 uVar2;
  Font **ppFVar3;
  AutoRefCount<EA::Text::Font> aAStack_110 [8];
  Font *local_108 [32];
  long local_8;
  
  if (0x20 < param_4) {
    param_4 = 0x20;
  }
  ppFVar3 = local_108;
  local_8 = ___stack_chk_guard;
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2,ppFVar3,param_4);
  if ((param_4 != 0) && (local_108[0] != (Font *)0x0)) {
    ppFVar1 = ppFVar3 + (param_4 - 1);
    do {
      AutoRefCount<EA::Text::Font>::AutoRefCount(aAStack_110,local_108[0]);
      eastl::
      rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
      ::insert(param_3);
      AutoRefCount<EA::Text::Font>::~AutoRefCount(aAStack_110);
      (**(code **)(*(long *)*ppFVar3 + 0x20))(*ppFVar3);
      if (ppFVar3 == ppFVar1) break;
      ppFVar3 = ppFVar3 + 1;
      local_108[0] = *ppFVar3;
    } while (local_108[0] != (Font *)0x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::AddFaceSource(EA::Text::FontServer::FaceSource&,
   EA::Text::FontDescription*) */

void __thiscall
EA::Text::FontServer::AddFaceSource(FontServer *this,FaceSource *param_1,FontDescription *param_2)

{
  FontDescription *this_00;
  fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *this_01;
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  wchar16 *pwVar6;
  CoreAllocatorAdapter *pCVar7;
  undefined8 uVar8;
  list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  *this_02;
  AutoFutex aAStack_1030 [8];
  generic_iterator<EA::Text::TextureInfo**,void> agStack_1028 [8];
  undefined8 local_1020;
  undefined8 uStack_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined8 local_fe8;
  undefined8 local_fe0;
  Face aFStack_f60 [1944];
  pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
  apStack_7c8 [1984];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (FontDescription *)(param_1 + 0xc);
  Thread::AutoFutex::AutoFutex(aAStack_1030,(Futex *)(this + 0x5110));
  uVar8 = 0;
  eastl::fixed_string<char16_t,48,true,eastl::allocator>::fixed_string
            ((fixed_string<char16_t,48,true,eastl::allocator> *)&local_fe8,(wchar16 *)this_00);
  uVar4 = local_fe8;
  uVar3 = FUN_0535a530(local_fe8,local_fe0);
  if (uVar3 < 0x20) {
    this_01 = (fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x300);
    FUN_0535aa0c(uVar4,local_fe0);
    uVar4 = FUN_0535a53c(local_fe8);
    FUN_0535fc20(&local_1020,this_01,uVar4);
    FUN_0535aff4((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *)&local_1010,*(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x310));
    uVar4 = local_1020;
    cVar1 = FUN_0535a540(local_1020,local_1010);
    if (cVar1 != '\0') {
      Face::Face(aFStack_f60,*(ICoreAllocator **)(this + 0x38));
      pwVar6 = (wchar16 *)FUN_0535a53c(local_fe8);
      StdC::Strlcpy((wchar16 *)aFStack_f60,pwVar6,0x20);
      pCVar7 = (CoreAllocatorAdapter *)
               eastl::
               fixed_hash_map<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,4ul,5ul,true,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               ::get_overflow_allocator(this_01);
      eastl::
      basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)&local_1010,(wchar16 *)aFStack_f60,pCVar7);
      eastl::
      pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
      ::pair(apStack_7c8,(basic_string *)&local_1010,aFStack_f60);
      eastl::
      basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      ~basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     *)&local_1010);
      eastl::
      hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
      ::insert((pair *)this_01);
      FUN_0535df40((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)&local_1010,*(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x310),
                   apStack_7c8);
      local_1020 = local_1010;
      uStack_1018 = uStack_1008;
      eastl::
      pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
      ::~pair(apStack_7c8);
      Face::~Face(aFStack_f60);
      uVar4 = local_1020;
    }
    lVar5 = FUN_0535a510(uVar4);
    this_02 = (list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
               *)(lVar5 + 0x68);
    FUN_0535b01c((rbtree_iterator *)&local_1010,*(undefined8 *)this_02);
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              (agStack_1028,(TextureInfo ***)&local_1010);
    if (param_2 == (FontDescription *)0x0) {
      while( true ) {
        eastl::
        list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
        end();
        bVar2 = eastl::operator!=((rbtree_iterator *)agStack_1028,(rbtree_iterator *)&local_1010);
        if (!bVar2) break;
        lVar5 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                          ((_List_const_iterator<Sexy::ActiveFontLayer> *)agStack_1028);
        cVar1 = FontDescription::operator==(this_00,(FontDescription *)(lVar5 + 0xc));
        if (cVar1 != '\0') {
          uVar8 = 0;
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)agStack_1028);
          goto LAB_05360698;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)agStack_1028);
      }
      uVar8 = 1;
      eastl::
      list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
      ::push_back(this_02,param_1);
    }
    else {
      while( true ) {
        eastl::
        list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
        end();
        bVar2 = eastl::operator!=((rbtree_iterator *)agStack_1028,(rbtree_iterator *)&local_1010);
        if (!bVar2) break;
        lVar5 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                          ((_List_const_iterator<Sexy::ActiveFontLayer> *)agStack_1028);
        cVar1 = FontDescription::operator==(this_00,(FontDescription *)(lVar5 + 0xc));
        if (cVar1 != '\0') {
          memcpy(param_2,(FontDescription *)(lVar5 + 0xc),0x74);
          uVar8 = 0;
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)agStack_1028);
          goto LAB_05360698;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)agStack_1028);
      }
      uVar8 = 1;
      eastl::
      list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
      ::push_back(this_02,param_1);
      memcpy(param_2,this_00,0x74);
    }
  }
LAB_05360698:
  eastl::fixed_string<char16_t,48,true,eastl::allocator>::~fixed_string
            ((fixed_string<char16_t,48,true,eastl::allocator> *)&local_fe8);
  Thread::AutoFutex::~AutoFutex(aAStack_1030);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::GetFont(EA::Text::TextStyle const*, EA::Text::Font**, unsigned int,
   char16_t, EA::Text::Script, bool) */

void __thiscall
EA::Text::FontServer::GetFont
          (FontServer *this,FontServer *param_1,long *param_2,uint param_3,ushort param_4,
          int param_6,char param_7)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  wchar16 *pwVar15;
  wchar16 *pwVar16;
  uint uVar17;
  FontServer *pFVar18;
  uint *puVar19;
  long lVar20;
  exception_ptr *this_00;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  wchar16 *local_478;
  AutoFutex aAStack_428 [8];
  undefined8 local_420 [2];
  long local_410 [2];
  FontDescription aFStack_400 [64];
  float local_3c0;
  int local_3a8;
  int local_3a4;
  uint local_388 [32];
  long local_308;
  exception_ptr aeStack_300 [184];
  wchar16 awStack_248 [32];
  wchar16 awStack_208 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_428,(Futex *)(this + 0x5110));
  bVar4 = 0 < *(int *)(this + 0x2c);
  if (0x20 < param_3) {
    param_3 = 0x20;
  }
  if (param_1 == (FontServer *)0x0) {
    param_1 = this + 0x40;
  }
  if (param_3 != 0) {
    memset(param_2,0,(ulong)param_3 << 3);
  }
  local_478 = awStack_208;
  FUN_0535a6c4(*(undefined8 *)(this + 0x49d0));
  iVar9 = 0;
  pwVar16 = local_478;
  pFVar18 = param_1;
  do {
    if (*(short *)pFVar18 == 0) break;
    iVar9 = iVar9 + 1;
    StdC::Strcpy(pwVar16,(wchar16 *)pFVar18);
    StdC::Strlwr(pwVar16);
    pwVar16 = pwVar16 + 0x20;
    pFVar18 = pFVar18 + 0x40;
  } while (iVar9 != 8);
  cVar1 = '\x01';
  if (param_4 != 0xffff) {
    uVar10 = FUN_0535ba90(*(undefined8 *)(this + 0x4a78),*(undefined8 *)(this + 0x4a80));
    uVar11 = FUN_0535ba40(*(undefined8 *)(this + 0x4a78),*(undefined8 *)(this + 0x4a80));
    cVar1 = FUN_0535a4d8(uVar10,uVar11);
  }
  cVar2 = FUN_0535a4e4(*(undefined8 *)(this + 0x4ed0));
  if ((cVar2 == '\0') && (uVar7 = iVar9 - 1, iVar9 != 0)) {
    pwVar16 = local_478 + (long)(int)uVar7 * 0x20;
    do {
      FUN_0535fac0(local_420,this + 0x4eb8,pwVar16);
      FUN_0535afcc(local_410,*(undefined8 *)(this + 0x4ec0),*(undefined8 *)(this + 0x4ec8));
      uVar10 = local_420[0];
      cVar2 = FUN_0535a4f0(local_420[0],local_410[0]);
      if (cVar2 != '\0') {
        lVar20 = FUN_0535a4fc(uVar10);
        pwVar15 = (wchar16 *)FUN_0535a500(*(undefined8 *)(lVar20 + 0x28));
        StdC::Strncpy(pwVar16,pwVar15,0x20);
        pwVar16[0x1f] = L'\0';
      }
      pwVar16 = pwVar16 + -0x20;
    } while (pwVar16 != awStack_248 + ((long)(int)uVar7 - (ulong)uVar7) * 0x20);
  }
  if (iVar9 != 0) {
    pwVar16 = local_478;
    do {
      while( true ) {
        eastl::
        hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        ::find_as<char16_t[32]>((wchar16 *)(this + 0x300));
        FUN_0535aff4((_List_const_iterator<Sexy::ActiveFontLayer> *)local_410,
                     *(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x310));
        uVar10 = local_420[0];
        cVar2 = FUN_0535a504(local_420[0],local_410[0]);
        if (cVar2 == '\0') break;
        pwVar16 = pwVar16 + 0x20;
        local_410[0] = FUN_0535a510(uVar10);
        local_410[0] = local_410[0] + 0x28;
        eastl::
        fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
        ::push_back((fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                     *)(this + 0x49d0),(Face **)local_410);
        if (pwVar16 == local_478 + ((ulong)(iVar9 - 1) + 1) * 0x20) goto LAB_05360ce0;
      }
      pwVar16 = pwVar16 + 0x20;
    } while (pwVar16 != local_478 + ((ulong)(iVar9 - 1) + 1) * 0x20);
  }
LAB_05360ce0:
  uVar10 = *(undefined8 *)(this + 0x49d0);
  uVar7 = 0x20;
  uVar5 = FUN_0535a514(uVar10,*(undefined8 *)(this + 0x49d8));
  if (uVar5 == 0) goto LAB_05360e58;
LAB_05360d00:
  uVar23 = 0;
  uVar17 = uVar23;
  do {
    uVar8 = 0xffffffff;
    lVar20 = 0;
    uVar21 = 0xffffffff;
    plVar12 = (long *)FUN_0535a520(uVar10,uVar23);
    FUN_0535b01c((_List_const_iterator<Sexy::FontLayer> *)local_420,*(undefined8 *)(*plVar12 + 0x40)
                );
    while( true ) {
      eastl::
      list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::end
                ();
      bVar3 = eastl::operator!=((rbtree_iterator *)local_420,(rbtree_iterator *)local_410);
      if ((uVar8 == 0) || (!bVar3)) break;
      lVar13 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)local_420);
      if ((uVar8 == 0xffffffff) &&
         (cVar2 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                            ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                             (lVar13 + 0x88)), cVar2 == '\0')) {
        puVar14 = (undefined8 *)FUN_0535a528(*(undefined8 *)(lVar13 + 0x88));
        if (cVar1 != '\0') {
          uVar8 = 1;
          goto LAB_05360d48;
        }
        cVar2 = (**(code **)(*(long *)*puVar14 + 0x88))((long *)*puVar14,param_4,param_6);
        uVar8 = 0;
        if (cVar2 != '\0') {
          uVar8 = 1;
          goto LAB_05360d48;
        }
      }
      else {
LAB_05360d48:
        uVar6 = (**(code **)(*(long *)this + 0x98))(this,lVar13 + 0xc,param_1);
        if ((int)uVar21 < (int)uVar6) {
          lVar20 = lVar13;
          uVar21 = uVar6;
        }
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)local_420);
    }
    if (lVar20 == 0) {
LAB_05360e18:
      if ((uVar7 <= uVar17) || (uVar5 <= uVar23 + 1)) break;
    }
    else {
      if (uVar8 == 0xffffffff) {
        if ((0x7f < param_4) && ((param_6 != -1 || (param_4 != 0xffff)))) {
          plVar12 = (long *)(**(code **)(*(long *)this + 0x90))(this,lVar20,param_1,1);
          if (plVar12 == (long *)0x0) goto LAB_05360e18;
          uVar8 = 1;
          if (cVar1 == '\0') {
            uVar8 = (**(code **)(*plVar12 + 0x88))(plVar12,param_4,param_6);
            uVar8 = uVar8 & 0xff;
          }
          (**(code **)(*plVar12 + 0x20))(plVar12);
          goto LAB_05360e10;
        }
      }
      else {
LAB_05360e10:
        if (uVar8 != 1) goto LAB_05360e18;
      }
      if (uVar17 == 0) {
LAB_05361114:
        (&local_308)[uVar17] = lVar20;
        local_388[uVar17] = uVar21;
        uVar17 = uVar17 + 1;
        goto LAB_05360e18;
      }
      if (lVar20 != local_308) {
        plVar12 = &local_308;
        do {
          plVar12 = plVar12 + 1;
          if (plVar12 == &local_308 + (ulong)(uVar17 - 1) + 1) goto LAB_05361114;
        } while (lVar20 != *plVar12);
      }
      if ((uVar7 <= uVar17) || (uVar5 <= uVar23 + 1)) goto LAB_053611cc;
    }
    uVar23 = uVar23 + 1;
    uVar10 = *(undefined8 *)(this + 0x49d0);
  } while( true );
  if (uVar17 == 0) {
LAB_05360e58:
    if (!bVar4) goto LAB_05360ef4;
    FUN_0535a6c4(*(undefined8 *)(this + 0x49d0),this + 0x49d8);
    FUN_0535b070((_List_const_iterator<Sexy::FontLayer> *)local_420,*(undefined8 *)(this + 0x308));
    while( true ) {
      FUN_0535aff4((_List_const_iterator<Sexy::ActiveFontLayer> *)local_410,
                   *(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x310));
      uVar10 = local_420[0];
      cVar2 = FUN_0535a504(local_420[0],local_410[0]);
      if (cVar2 == '\0') break;
      local_410[0] = FUN_0535a510(uVar10);
      local_410[0] = local_410[0] + 0x28;
      eastl::
      fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::push_back((fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *)(this + 0x49d0),(Face **)local_410);
      eastl::
      hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
      ::operator++((hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
                    *)local_420);
    }
    uVar10 = *(undefined8 *)(this + 0x49d0);
    uVar7 = 1;
    uVar5 = FUN_0535a514(uVar10,*(undefined8 *)(this + 0x49d8));
    bVar4 = false;
    if (uVar5 == 0) goto LAB_05360ef4;
    goto LAB_05360d00;
  }
LAB_053611cc:
  if (uVar17 < 2) {
    FontDescription::FontDescription(aFStack_400);
    goto LAB_05360f64;
  }
  puVar19 = local_388;
  this_00 = aeStack_300;
  uVar7 = 1;
  do {
    puVar19 = puVar19 + 1;
    if ((int)local_388[0] < (int)*puVar19) {
      std::__exception_ptr::exception_ptr::swap(this_00,(exception_ptr *)&local_308);
      Internal::swap<int>((int *)puVar19,(int *)local_388);
    }
    uVar7 = uVar7 + 1;
    this_00 = this_00 + 8;
  } while (uVar7 < uVar17);
  goto LAB_05360f54;
LAB_05360ef4:
  FUN_0535b070((_List_const_iterator<Sexy::FontLayer> *)local_420,*(undefined8 *)(this + 0x308));
  while( true ) {
    FUN_0535aff4((_List_const_iterator<Sexy::ActiveFontLayer> *)local_410,
                 *(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x310));
    uVar10 = local_420[0];
    cVar1 = FUN_0535a504(local_420[0],local_410[0]);
    if (cVar1 == '\0') break;
    lVar20 = FUN_0535a510(uVar10);
    uVar7 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                      ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                       (lVar20 + 0x68));
    if ((uVar7 & 0xff) == 0) {
      FUN_0535b01c((_List_const_iterator<Sexy::ActiveFontLayer> *)local_410,
                   *(undefined8 *)(lVar20 + 0x68));
      local_308 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                            ((_List_const_iterator<Sexy::ActiveFontLayer> *)local_410);
      local_388[0] = uVar7 & 0xff;
      FontDescription::FontDescription(aFStack_400);
      uVar17 = 1;
      goto LAB_05360f64;
    }
    eastl::
    hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
    ::operator++((hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
                  *)local_420);
  }
  uVar17 = 0;
LAB_05360f54:
  FontDescription::FontDescription(aFStack_400);
  if (uVar17 != 0) {
LAB_05360f64:
    lVar20 = 0;
    plVar12 = (long *)0x0;
    do {
      while( true ) {
        uVar7 = (uint)lVar20;
        if (param_7 != '\0') {
          FUN_0535ae5c((_List_const_iterator<Sexy::FontLayer> *)local_420,
                       *(undefined8 *)(*(long *)(aeStack_300 + lVar20 * 8 + -8) + 0x88));
          while( true ) {
            eastl::
            list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
            ::end();
            bVar4 = eastl::operator!=((rbtree_iterator *)local_420,(rbtree_iterator *)local_410);
            if (!bVar4) break;
            puVar14 = (undefined8 *)
                      std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                ((_List_const_iterator<Sexy::ActiveFontLayer> *)local_420);
            plVar22 = (long *)*puVar14;
            (**(code **)(*plVar22 + 0x60))(plVar22,aFStack_400);
            if (((ABS(local_3c0 - *(float *)(param_1 + 0x200)) < 0.05) &&
                (local_3a8 == *(int *)(param_1 + 0x214))) &&
               (local_3a4 == *(int *)(param_1 + 0x218))) {
              (**(code **)(*plVar22 + 0x18))(plVar22);
              goto LAB_05361040;
            }
            std::_List_const_iterator<Sexy::FontLayer>::operator++
                      ((_List_const_iterator<Sexy::FontLayer> *)local_420);
          }
        }
        if (((param_3 <= uVar7) && (plVar12 != (long *)0x0)) ||
           (plVar22 = (long *)(**(code **)(*(long *)this + 0x90))
                                        (this,*(undefined8 *)(aeStack_300 + lVar20 * 8 + -8),param_1
                                         ,param_7), plVar22 == (long *)0x0)) break;
LAB_05361040:
        if (plVar12 == (long *)0x0) {
          plVar12 = plVar22;
          if (param_3 <= uVar7) break;
        }
        else if (param_3 <= uVar7) {
          if (plVar12 != plVar22) {
            (**(code **)(*plVar22 + 0x20))(plVar22);
          }
          break;
        }
        param_2[lVar20] = (long)plVar22;
        lVar20 = lVar20 + 1;
        if (uVar17 <= (uint)lVar20) goto LAB_05361064;
      }
      lVar20 = lVar20 + 1;
    } while ((uint)lVar20 < uVar17);
LAB_05361064:
    if (plVar12 != (long *)0x0) {
      plVar22 = plVar12;
      if ((0 < (int)*(uint *)(this + 0x30)) && ((*(uint *)(this + 0x30) >> 1 & 1) != 0)) {
        (**(code **)(*plVar12 + 0x60))(plVar12,aFStack_400);
        if (iVar9 != 0) {
          pwVar16 = local_478 + ((ulong)(iVar9 - 1) + 1) * 0x20;
          do {
            iVar9 = StdC::Stricmp((wchar16 *)aFStack_400,local_478);
            if (iVar9 == 0) goto LAB_0536107c;
            local_478 = local_478 + 0x20;
          } while (local_478 != pwVar16);
        }
        if ((*(uint *)(this + 0x30) >> 1 & 1) != 0) {
          if (((param_2 != (long *)0x0) && (plVar22 = (long *)*param_2, param_3 != 0)) &&
             (plVar22 != (long *)0x0)) {
            uVar7 = 0;
            do {
              uVar7 = uVar7 + 1;
              (**(code **)(*plVar22 + 0x20))();
              plVar22 = (long *)param_2[uVar7];
              if (param_3 <= uVar7) break;
            } while (plVar22 != (long *)0x0);
          }
          plVar22 = (long *)0x0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
      }
      goto LAB_0536107c;
    }
  }
  plVar22 = (long *)0x0;
LAB_0536107c:
  Thread::AutoFutex::~AutoFutex(aAStack_428);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar22);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::AddFace(EA::IO::IStream*, EA::Text::FontType, EA::Text::FontDescription*)
    */

void __thiscall
EA::Text::FontServer::AddFace(FontServer *this,IStream *param_1,int param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  IStream *local_558;
  AutoFutex aAStack_550 [8];
  IStream *local_548;
  int local_540;
  FontDescription aFStack_53c [116];
  undefined1 local_4c8;
  FaceData *local_3f8;
  OutlineFont aOStack_3f0 [992];
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_558 = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_550,(Futex *)(this + 0x5110));
  (**(code **)(*(long *)local_558 + 0x10))(local_558);
  FaceSource::FaceSource((FaceSource *)&local_548,*(ICoreAllocator **)(this + 0x38));
  local_548 = local_558;
  (**(code **)(*(long *)local_558 + 0x10))(local_558);
  local_4c8 = 0;
  local_540 = param_3;
  if (param_3 == 2) {
    iVar5 = 0;
    uVar4 = 0;
    uVar6 = 0x20;
    do {
      local_4c8 = (undefined1)iVar5;
      OutlineFont::OutlineFont(aOStack_3f0,(ICoreAllocator *)0x0);
      Font::AddRef((Font *)aOStack_3f0);
      OutlineFont::SetAllocator(aOStack_3f0,*(ICoreAllocator **)(this + 0x38));
      if (*(int *)(this + 0x10) != -1) {
        OutlineFont::SetOption(aOStack_3f0,1,*(int *)(this + 0x10));
      }
      if (*(int *)(this + 0x14) != -1) {
        OutlineFont::SetOption(aOStack_3f0,2,*(int *)(this + 0x14));
      }
      if (*(int *)(this + 0x18) != -1) {
        OutlineFont::SetOption(aOStack_3f0,3,*(int *)(this + 0x18));
      }
      if (*(int *)(this + 0x1c) != -1) {
        OutlineFont::SetOption(aOStack_3f0,4,*(int *)(this + 0x1c));
      }
      if (*(int *)(this + 0x20) != -1) {
        OutlineFont::SetOption(aOStack_3f0,5,*(int *)(this + 0x20));
      }
      local_3f8 = (FaceData *)
                  OutlineFont::CreateFaceData
                            (*(ICoreAllocator **)(this + 0x38),local_558,(void *)0x0,0,iVar5);
      if (local_3f8 == (FaceData *)0x0) {
        OutlineFont::~OutlineFont(aOStack_3f0);
        break;
      }
      OutlineFont::SetFaceData(aOStack_3f0,local_3f8);
      bVar1 = OutlineFont::Open(aOStack_3f0,local_558,iVar5);
      uVar3 = (uint)bVar1;
      if (bVar1 != 0) {
        cVar2 = OutlineFont::GetFontDescription(aOStack_3f0,aFStack_53c);
        uVar3 = 0;
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*(long *)this + 0xa0))(this,(FaceSource *)&local_548,param_4);
          if (cVar2 != '\0') {
            uVar4 = uVar4 + 1;
          }
          uVar3 = uVar6;
          if (iVar5 == 0) {
            uVar3 = *(uint *)(local_10 + 0x194);
          }
        }
      }
      iVar5 = iVar5 + 1;
      FaceData::Release(local_3f8);
      local_3f8 = (FaceData *)0x0;
      OutlineFont::~OutlineFont(aOStack_3f0);
      uVar6 = uVar3;
    } while (iVar5 < (int)uVar3);
  }
  else if (param_3 == 1) {
    BmpFont::BmpFont((BmpFont *)aOStack_3f0,(ICoreAllocator *)0x0);
    Font::AddRef((Font *)aOStack_3f0);
    BmpFont::SetAllocator((BmpFont *)aOStack_3f0,*(ICoreAllocator **)(this + 0x38));
    if (*(int *)(this + 0x24) != -1) {
      BmpFont::SetOption((BmpFont *)aOStack_3f0,6,*(int *)(this + 0x24));
    }
    if (*(int *)(this + 0x28) != -1) {
      BmpFont::SetOption((BmpFont *)aOStack_3f0,7,*(int *)(this + 0x28));
    }
    cVar2 = BmpFont::Open((BmpFont *)aOStack_3f0,&local_558,1);
    if ((cVar2 == '\0') ||
       (cVar2 = BmpFont::GetFontDescription((BmpFont *)aOStack_3f0,aFStack_53c), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*(long *)this + 0xa0))(this,(FaceSource *)&local_548,param_4);
      uVar4 = uVar4 & 0xff;
    }
    BmpFont::~BmpFont((BmpFont *)aOStack_3f0);
  }
  else {
    uVar4 = 0;
    if (param_3 == 4) {
      PolygonFont::PolygonFont((PolygonFont *)aOStack_3f0,(ICoreAllocator *)0x0);
      Font::AddRef((Font *)aOStack_3f0);
      PolygonFont::SetAllocator((PolygonFont *)aOStack_3f0,*(ICoreAllocator **)(this + 0x38));
      cVar2 = PolygonFont::Open((PolygonFont *)aOStack_3f0,local_558);
      if ((cVar2 == '\0') ||
         (cVar2 = PolygonFont::GetFontDescription((PolygonFont *)aOStack_3f0,aFStack_53c),
         cVar2 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*(long *)this + 0xa0))(this,(FaceSource *)&local_548,param_4);
        uVar4 = uVar4 & 0xff;
      }
      PolygonFont::~PolygonFont((PolygonFont *)aOStack_3f0);
    }
  }
  (**(code **)(*(long *)local_558 + 0x18))(local_558);
  FaceSource::~FaceSource((FaceSource *)&local_548);
  Thread::AutoFutex::~AutoFutex(aAStack_550);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

