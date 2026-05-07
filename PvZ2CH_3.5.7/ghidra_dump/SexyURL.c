// Class: SexyURL


/* SexyURL::~SexyURL() */

void __thiscall SexyURL::~SexyURL(SexyURL *this)

{
  std::vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>>::~vector
            ((vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>> *)(this + 0xb0));
  std::vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>>::~vector
            ((vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>> *)(this + 0x98));
  std::string::~string((string *)this);
  return;
}


/* SexyURL::IsEmpty() */

bool __thiscall SexyURL::IsEmpty(SexyURL *this)

{
  return *(long *)(*(long *)this + -0x18) == 0;
}


/* SexyURL::User() const */

void SexyURL::User(void)

{
  long in_x0;
  
  Range::length((Range_conflict *)(in_x0 + 0x18));
  FUN_05475ffc();
  return;
}


/* SexyURL::Password() const */

void SexyURL::Password(void)

{
  long in_x0;
  
  Range::length((Range_conflict *)(in_x0 + 0x28));
  FUN_05475ffc();
  return;
}


/* SexyURL::Port() const */

void SexyURL::Port(void)

{
  long in_x0;
  
  Range::length((Range_conflict *)(in_x0 + 0x48));
  FUN_05475ffc();
  return;
}


/* SexyURL::Path() const */

void SexyURL::Path(void)

{
  long in_x0;
  
  Range::length((Range_conflict *)(in_x0 + 0x58));
  FUN_05475ffc();
  return;
}


/* SexyURL::Params() const */

void SexyURL::Params(void)

{
  long in_x0;
  
  Range::length((Range_conflict *)(in_x0 + 0x68));
  FUN_05475ffc();
  return;
}


/* SexyURL::Query() const */

void SexyURL::Query(void)

{
  long in_x0;
  
  Range::length((Range_conflict *)(in_x0 + 0x78));
  FUN_05475ffc();
  return;
}


/* SexyURL::Fragment() const */

void SexyURL::Fragment(void)

{
  long in_x0;
  
  Range::length((Range_conflict *)(in_x0 + 0x88));
  FUN_05475ffc();
  return;
}


/* SexyURL::StringWithoutPrefix(std::string const&, SexyURL::Range, char const*, SexyURL::Range*)
   const */

bool SexyURL::StringWithoutPrefix
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,char *param_5,
               long *param_6)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_5);
  iVar1 = FUN_0547498c(param_2,param_3,sVar2,param_5);
  if (iVar1 == 0) {
    param_6[1] = param_4;
    *param_6 = sVar2 + param_3;
  }
  return iVar1 == 0;
}


/* SexyURL::SplitStringFromLeft(std::string const&, SexyURL::Range, char, SexyURL::Range*,
   SexyURL::Range*) const */

bool SexyURL::SplitStringFromLeft
               (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined4 param_5
               ,ulong *param_6,ulong *param_7)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_054744e0(param_2,param_5,param_4 - 1);
  *param_6 = param_3;
  if (param_3 <= uVar1 && uVar1 != 0xffffffffffffffff) {
    param_6[1] = uVar1;
    param_7[1] = param_4;
    *param_7 = uVar1 + 1;
    return param_3 <= uVar1 && uVar1 != 0xffffffffffffffff;
  }
  param_6[1] = param_4;
  *param_7 = param_4;
  param_7[1] = param_4;
  return false;
}


/* SexyURL::SplitStringFromRight(std::string const&, SexyURL::Range, char, SexyURL::Range*,
   SexyURL::Range*) const */

undefined8
SexyURL::SplitStringFromRight
          (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined4 param_5,
          long *param_6,long *param_7)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_054743b0(param_2,param_5);
  *param_6 = param_3;
  if (param_4 <= uVar1) {
    param_6[1] = param_3;
    *param_7 = param_3;
    param_7[1] = param_4;
    return 0;
  }
  param_6[1] = uVar1;
  param_7[1] = param_4;
  *param_7 = uVar1 + 1;
  return 1;
}


/* SexyURL::DecodedPart(SexyURL::Range) const */

undefined8
SexyURL::DecodedPart(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  long local_10;
  undefined8 uStack_8;
  
  local_10 = param_3;
  uStack_8 = param_4;
  Set8BytesTo0(param_1);
  uVar7 = Range::length((Range_conflict *)&local_10);
  FUN_0547570c(param_1,uVar7);
  lVar8 = FUN_054742a4(param_2);
  pbVar1 = (byte *)(lVar8 + local_10);
  lVar8 = Range::length((Range_conflict *)&local_10);
  pbVar2 = pbVar1 + lVar8;
  do {
    while( true ) {
      if (pbVar2 <= pbVar1) {
        return param_1;
      }
      pbVar9 = pbVar1 + 1;
      bVar5 = *pbVar1;
      if ((pbVar2 + -2 <= pbVar9) || (bVar5 != 0x25)) break;
      bVar5 = pbVar1[1];
      iVar6 = isxdigit((uint)bVar5);
      if (iVar6 != 0) {
        bVar3 = pbVar1[2];
        iVar6 = isxdigit((uint)bVar3);
        if (iVar6 != 0) {
          pbVar9 = pbVar1 + 3;
          cVar4 = FUN_053e1b34(bVar5);
          bVar5 = FUN_053e1b34(bVar3);
          bVar5 = bVar5 | cVar4 << 4;
          goto LAB_053e202c;
        }
      }
      bVar5 = 0x25;
LAB_053e202c:
      FUN_05475b0c(param_1,1,bVar5);
      pbVar1 = pbVar9;
    }
    if (bVar5 != 0x2b) goto LAB_053e202c;
    FUN_05475b0c(param_1,1,0x20);
    pbVar1 = pbVar9;
  } while( true );
}


/* SexyURL::ClearComponents() */

void __thiscall SexyURL::ClearComponents(SexyURL *this)

{
  Range::clear((Range_conflict *)(this + 8));
  Range::clear((Range_conflict *)(this + 0x18));
  Range::clear((Range_conflict *)(this + 0x28));
  Range::clear((Range_conflict *)(this + 0x38));
  Range::clear((Range_conflict *)(this + 0x48));
  Range::clear((Range_conflict *)(this + 0x58));
  Range::clear((Range_conflict *)(this + 0x68));
  Range::clear((Range_conflict *)(this + 0x78));
  Range::clear((Range_conflict *)(this + 0x88));
  std::vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>>::clear
            ((vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>> *)(this + 0x98));
  return;
}


/* SexyURL::Clear() */

void __thiscall SexyURL::Clear(SexyURL *this)

{
  FUN_05474ff8();
  ClearComponents(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SexyURL::SeparateStringIntoParts(std::string const&, SexyURL::Range, char const*, ...) const */

void SexyURL::SeparateStringIntoParts
               (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,char *param_5,
               ulong *param_6,...)

{
  int iVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong local_d8;
  ulong local_d0;
  long *plVar9;
  int local_b0;
  
  lVar3 = ___stack_chk_guard;
  lVar8 = 0;
  local_b0 = -0x10;
  local_d8 = param_4;
  if (param_4 <= param_3) {
LAB_053e2340:
    if (lVar3 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar8);
    }
    return;
  }
  plVar6 = (long *)register0x00000008;
LAB_053e2294:
  uVar7 = param_4;
  if (*param_5 != '\0') {
    local_d0 = FUN_054745c0(param_2,param_5,param_3);
    puVar5 = eastl::min_alt<unsigned_long>(&local_d8,&local_d0);
    uVar7 = *puVar5;
  }
  *param_6 = param_3;
  if (param_3 < uVar7) {
    lVar8 = lVar8 + 1;
  }
  param_6[1] = uVar7;
  plVar9 = plVar6;
  if (local_b0 < 0) goto LAB_053e230c;
LAB_053e22c0:
  plVar9 = plVar6 + 1;
LAB_053e22cc:
  cVar2 = *param_5;
  param_6 = (ulong *)*plVar6;
  plVar6 = plVar9;
  do {
    if (cVar2 == '\0') {
LAB_053e2334:
      param_3 = uVar7 + 1;
      if (param_4 <= param_3) goto LAB_053e2340;
      goto LAB_053e2294;
    }
    param_5 = param_5 + 1;
    pcVar4 = (char *)FUN_054741b0(param_2,uVar7);
    if (*pcVar4 == cVar2) goto LAB_053e2334;
    param_6[1] = uVar7;
    *param_6 = uVar7;
    plVar9 = plVar6;
    if (-1 < local_b0) goto LAB_053e22c0;
LAB_053e230c:
    iVar1 = local_b0 + 8;
    if (iVar1 < 1) break;
    cVar2 = *param_5;
    plVar6 = plVar9 + 1;
    param_6 = (ulong *)*plVar9;
    local_b0 = iVar1;
  } while( true );
  plVar6 = (long *)(&stack0x00000000 + local_b0);
  local_b0 = iVar1;
  goto LAB_053e22cc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SexyURL::IdentifyComponents() */

void __thiscall SexyURL::IdentifyComponents(SexyURL *this)

{
  char cVar1;
  hash_node **pphVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05474e7c();
  FUN_05474eb0(this);
  Range::clear((Range_conflict *)&local_48);
  pphVar2 = (hash_node **)FUN_05474184(this);
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base
            ((hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
              *)&local_18,(hash_node *)0x0,pphVar2);
  cVar1 = SplitStringFromRight
                    (this,this,local_18,uStack_10,0x3a,this + 8,(Range_conflict *)&local_48);
  if (cVar1 != '\0') {
    Range::clear((Range_conflict *)&local_38);
    cVar1 = StringWithoutPrefix(this,this,local_48,uStack_40,&DAT_056ec0f8,
                                (Range_conflict *)&local_38);
    if (cVar1 == '\0') {
      *(undefined8 *)(this + 0x58) = local_48;
      *(undefined8 *)(this + 0x60) = uStack_40;
    }
    else {
      Range::clear((Range_conflict *)&local_28);
      SeparateStringIntoParts
                (this,this,local_38,uStack_30,":/;?#",(Range_conflict *)&local_28,this + 0x48,
                 this + 0x58,this + 0x68,this + 0x78,this + 0x88);
      cVar1 = Range::empty((Range_conflict *)&local_28);
      if (cVar1 == '\0') {
        Range::clear((Range_conflict *)&local_18);
        cVar1 = SplitStringFromRight
                          (this,this,local_28,uStack_20,0x40,
                           (hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
                            *)&local_18,this + 0x38);
        if (cVar1 != '\0') {
          SplitStringFromLeft(this,this,local_18,uStack_10,0x3a,this + 0x18,this + 0x28);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SexyURL::TEMPNAMEPLACEHOLDERVALUE(std::string const&) */

SexyURL * __thiscall SexyURL::operator=(SexyURL *this,string *param_1)

{
  thunk_FUN_05475e00();
  ClearComponents(this);
  IdentifyComponents(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SexyURL::ValueForKey(char const*, std::vector<SexyURL::KeyedValue,
   std::allocator<SexyURL::KeyedValue> >&) const */

void SexyURL::ValueForKey(char *param_1,vector *param_2)

{
  bool bVar1;
  int iVar2;
  Range_conflict *this;
  undefined8 uVar3;
  long lVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *in_x2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(in_x2);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(in_x2);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      FUN_05475ffc(param_1,0,0);
LAB_053e2634:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (Range_conflict *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    uVar3 = Range::length(this);
    iVar2 = FUN_0547498c(param_1,*(undefined8 *)this,uVar3,param_2);
    if (iVar2 == 0) {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      DecodedPart((string *)&local_10,param_1,*(undefined8 *)(lVar4 + 0x10),
                  *(undefined8 *)(lVar4 + 0x18));
      FUN_05474148();
      std::string::~string((string *)&local_10);
      goto LAB_053e2634;
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  } while( true );
}


/* SexyURL::SexyURL() */

void __thiscall SexyURL::SexyURL(SexyURL *this)

{
  Set8BytesTo0();
  Range::clear((Range_conflict *)(this + 8));
  Range::clear((Range_conflict *)(this + 0x18));
  Range::clear((Range_conflict *)(this + 0x28));
  Range::clear((Range_conflict *)(this + 0x38));
  Range::clear((Range_conflict *)(this + 0x48));
  Range::clear((Range_conflict *)(this + 0x58));
  Range::clear((Range_conflict *)(this + 0x68));
  Range::clear((Range_conflict *)(this + 0x78));
  Range::clear((Range_conflict *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  return;
}


/* SexyURL::SexyURL(std::string const&) */

void __thiscall SexyURL::SexyURL(SexyURL *this,string *param_1)

{
  FUN_05475d88();
  Range::clear((Range_conflict *)(this + 8));
  Range::clear((Range_conflict *)(this + 0x18));
  Range::clear((Range_conflict *)(this + 0x28));
  Range::clear((Range_conflict *)(this + 0x38));
  Range::clear((Range_conflict *)(this + 0x48));
  Range::clear((Range_conflict *)(this + 0x58));
  Range::clear((Range_conflict *)(this + 0x68));
  Range::clear((Range_conflict *)(this + 0x78));
  Range::clear((Range_conflict *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  IdentifyComponents(this);
  return;
}


/* SexyURL::MinisculePart(SexyURL::Range) const */

string * SexyURL::MinisculePart(string *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  long local_10;
  undefined8 uStack_8;
  byte *pbVar6;
  
  local_10 = param_3;
  uStack_8 = param_4;
  Set8BytesTo0(param_1);
  uVar3 = Range::length((Range_conflict *)&local_10);
  FUN_0547570c(param_1,uVar3);
  lVar4 = FUN_054742a4(param_2);
  pbVar1 = (byte *)(lVar4 + local_10);
  lVar4 = Range::length((Range_conflict *)&local_10);
  pbVar6 = pbVar1;
  if (pbVar1 < pbVar1 + lVar4) {
    do {
      pbVar5 = pbVar6 + 1;
      iVar2 = tolower((uint)*pbVar6);
      std::string::append<int>(param_1,1,iVar2);
      pbVar6 = pbVar5;
    } while (pbVar5 != pbVar1 + lVar4);
  }
  return param_1;
}


/* SexyURL::Scheme() const */

void SexyURL::Scheme(void)

{
  long in_x0;
  
  MinisculePart(in_x0,*(undefined8 *)(in_x0 + 8),*(undefined8 *)(in_x0 + 0x10));
  return;
}


/* SexyURL::Host() const */

void SexyURL::Host(void)

{
  long in_x0;
  
  MinisculePart(in_x0,*(undefined8 *)(in_x0 + 0x38),*(undefined8 *)(in_x0 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SexyURL::CrackKeyedValues(SexyURL::Range, char, char, std::vector<SexyURL::KeyedValue,
   std::allocator<SexyURL::KeyedValue> >&) const */

void SexyURL::CrackKeyedValues
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               undefined1 param_5,
               vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>> *param_6)

{
  char cVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  KeyedValue aKStack_28 [16];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Range::clear((Range_conflict *)&local_48);
  local_38 = param_2;
  uStack_30 = param_3;
  while (cVar1 = Range::empty((Range_conflict *)&local_38), cVar1 == '\0') {
    while( true ) {
      cVar1 = SplitStringFromRight
                        (param_1,param_1,local_38,uStack_30,param_4,(Range_conflict *)&local_48,
                         (Range_conflict *)&local_38);
      if (cVar1 == '\0') {
        local_48 = local_38;
        uStack_40 = uStack_30;
        Range::clear((Range_conflict *)&local_38);
      }
      KeyedValue::KeyedValue(aKStack_28);
      cVar1 = SplitStringFromLeft(param_1,param_1,local_48,uStack_40,param_5,aKStack_28,auStack_18);
      if (cVar1 == '\0') break;
      std::vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>>::push_back
                (param_6,aKStack_28);
      cVar1 = Range::empty((Range_conflict *)&local_38);
      if (cVar1 != '\0') goto LAB_053e2d50;
    }
  }
LAB_053e2d50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SexyURL::QueryValueForKey(char const*) const */

void SexyURL::QueryValueForKey(char *param_1)

{
  char cVar1;
  vector *in_x1;
  
  cVar1 = std::vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>>::empty
                    ((vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>> *)
                     (param_1 + 0x98));
  if (cVar1 != '\0') {
    cVar1 = Range::empty((Range_conflict *)(param_1 + 0x78));
    if (cVar1 == '\0') {
      CrackKeyedValues(param_1,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0x26,
                       0x3d,(vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>> *)
                            (param_1 + 0x98));
    }
  }
  ValueForKey(param_1,in_x1);
  return;
}


/* SexyURL::FragmentValueForKey(char const*) const */

void SexyURL::FragmentValueForKey(char *param_1)

{
  char cVar1;
  vector *in_x1;
  
  cVar1 = std::vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>>::empty
                    ((vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>> *)
                     (param_1 + 0xb0));
  if (cVar1 != '\0') {
    cVar1 = Range::empty((Range_conflict *)(param_1 + 0x88));
    if (cVar1 == '\0') {
      CrackKeyedValues(param_1,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),0x26,
                       0x3d,(vector<SexyURL::KeyedValue,std::allocator<SexyURL::KeyedValue>> *)
                            (param_1 + 0xb0));
    }
  }
  ValueForKey(param_1,in_x1);
  return;
}

