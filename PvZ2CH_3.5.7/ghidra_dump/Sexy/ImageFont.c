// Class: Sexy::ImageFont


/* Sexy::ImageFont::GetPointSize() */

undefined4 __thiscall Sexy::ImageFont::GetPointSize(ImageFont *this)

{
  return *(undefined4 *)(this + 0x30);
}


/* Sexy::ImageFont::CharWidth(wchar_t) */

void __thiscall Sexy::ImageFont::CharWidth(ImageFont *this,wchar_t param_1)

{
  (**(code **)(*(long *)this + 0x90))(this,param_1,0);
  return;
}


/* Sexy::ImageFont::DrawString(Sexy::Graphics*, int, int, std::wstring const&, Sexy::Color const&,
   Sexy::TRect<int> const&) */

void Sexy::ImageFont::DrawString
               (Graphics *param_1,int param_2,int param_3,wstring *param_4,Color *param_5,
               TRect *param_6)

{
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,param_2,param_3);
  return;
}


/* Sexy::ImageFont::SetPointSize(int) */

void __thiscall Sexy::ImageFont::SetPointSize(ImageFont *this,int param_1)

{
  *(int *)(this + 0x30) = param_1;
  this[0x51] = (ImageFont)0x0;
  return;
}


/* Sexy::ImageFont::SetScale(double) */

void __thiscall Sexy::ImageFont::SetScale(ImageFont *this,double param_1)

{
  *(double *)(this + 0x68) = param_1;
  this[0x51] = (ImageFont)0x0;
  return;
}


/* Sexy::ImageFont::GetDefaultPointSize() */

undefined4 __thiscall Sexy::ImageFont::GetDefaultPointSize(ImageFont *this)

{
  return *(undefined4 *)(*(long *)(this + 0x28) + 0x98);
}


/* Sexy::ImageFont::Prepare() */

void __thiscall Sexy::ImageFont::Prepare(ImageFont *this)

{
  if (this[0x51] == (ImageFont)0x0) {
    (**(code **)(*(long *)this + 0xa8))();
    this[0x51] = (ImageFont)0x1;
  }
  return;
}


/* Sexy::ImageFont::StringWidth(std::wstring const&) */

int __thiscall Sexy::ImageFont::StringWidth(ImageFont *this,wstring *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  lVar4 = 0;
  uVar6 = 0;
  while( true ) {
    iVar2 = FUN_054765d0(param_1);
    if (iVar2 <= (int)lVar4) break;
    puVar3 = (undefined4 *)FUN_054765fc(param_1,lVar4);
    uVar1 = *puVar3;
    iVar2 = (**(code **)(*(long *)this + 0x90))(this,uVar1,uVar6);
    iVar5 = iVar5 + iVar2;
    lVar4 = lVar4 + 1;
    uVar6 = uVar1;
  }
  return iVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::GetDefine(std::wstring const&) */

void __thiscall Sexy::ImageFont::GetDefine(ImageFont *this,wstring *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = (**(code **)(**(long **)(this + 0x28) + 0x58))(*(long **)(this + 0x28));
  if (lVar2 == 0) {
    FUN_05478178();
    nop();
  }
  else {
    DescParser::DataElementToString(*(DataElement **)(this + 0x28),SUB81(lVar2,0));
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ImageFont::StaticGetClass() */

long * Sexy::ImageFont::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Font::StaticGetClass();
  (*pcVar3)(plVar1,"ImageFont",uVar2,StaticNew);
  return sClass;
}


/* Sexy::ImageFont::GetClass() const */

long * Sexy::ImageFont::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Font::StaticGetClass();
  (*pcVar3)(plVar1,"ImageFont",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::CheckCache(std::string const&, std::string const&) */

void Sexy::ImageFont::CheckCache(string *param_1,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"*");
  if (bVar1) {
    FUN_05475d88(asStack_10,param_2);
  }
  else {
    FUN_031f5e7c(asStack_10,"ImageFontWide2:",param_2);
  }
  uVar2 = FUN_053a1108();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::SetCacheUpToDate(std::string const&, std::string const&) */

void Sexy::ImageFont::SetCacheUpToDate(string *param_1,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"*");
  if (bVar1) {
    FUN_05475d88(asStack_10,param_2);
  }
  else {
    FUN_031f5e7c(asStack_10,"ImageFontWide2:",param_2);
  }
  uVar2 = FUN_053a1110();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::GetLayerCount() */

void __thiscall Sexy::ImageFont::GetLayerCount(ImageFont *this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  local_18 = FUN_053a21ec(*(undefined8 *)(*(long *)(this + 0x28) + 0xd0));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(*(long *)(this + 0x28) + 0xd0));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar4);
      }
      return;
    }
    lVar2 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                      ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    uVar3 = FUN_05474184(lVar2 + 0x38);
    if (uVar3 < 6) {
LAB_053a22cc:
      iVar4 = iVar4 + 1;
    }
    else {
      FUN_05475ffc((string *)&local_10,lVar2 + 0x38,uVar3 - 5,0xffffffffffffffff);
      bVar1 = std::operator!=((string *)&local_10,"__MOD");
      std::string::~string((string *)&local_10);
      if (bVar1) goto LAB_053a22cc;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::PopLayerColor(std::string const&) */

void __thiscall Sexy::ImageFont::PopLayerColor(ImageFont *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  ActiveFontLayer *this_00;
  char *__s1;
  char *pcVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_1,"__MOD");
  local_18 = FUN_053a2344(*(undefined8 *)(this + 0x58));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x58));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      std::string::~string(asStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (ActiveFontLayer *)
              std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                        ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    __s1 = (char *)FUN_0547429c(*(long *)(this_00 + 8) + 0x38);
    pcVar3 = (char *)FUN_0547429c(param_1);
    iVar2 = strcasecmp(__s1,pcVar3);
    if (iVar2 == 0) {
LAB_053a31e0:
      ActiveFontLayer::PopColor(this_00);
    }
    else {
      pcVar3 = (char *)FUN_0547429c(asStack_20);
      iVar2 = strcasecmp(__s1,pcVar3);
      if (iVar2 == 0) goto LAB_053a31e0;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::PopLayerColor(int) */

void __thiscall Sexy::ImageFont::PopLayerColor(ImageFont *this,int param_1)

{
  string *psVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_053a21ec(*(undefined8 *)(*(long *)(this + 0x28) + 0xd0));
  iVar5 = 0;
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(*(long *)(this + 0x28) + 0xd0));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
LAB_053a333c:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar3 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                      ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    psVar1 = (string *)(lVar3 + 0x38);
    uVar4 = FUN_05474184(psVar1);
    if (uVar4 < 6) {
LAB_053a32a4:
      if (iVar5 == param_1) {
        PopLayerColor(this,psVar1);
        goto LAB_053a333c;
      }
      iVar5 = iVar5 + 1;
    }
    else {
      FUN_05475ffc((string *)&local_10,psVar1,uVar4 - 5,0xffffffffffffffff);
      bVar2 = std::operator!=((string *)&local_10,"__MOD");
      std::string::~string((string *)&local_10);
      if (bVar2) goto LAB_053a32a4;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::SerializeWrite(void*, int) */

void __thiscall Sexy::ImageFont::SerializeWrite(ImageFont *this,void *param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  string *psVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 1) {
    lVar13 = *(long *)(this + 0x28);
    iVar4 = std::
            map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
            ::size((map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
                    *)(lVar13 + 0xa0));
    iVar4 = iVar4 * 4 + 0x1d;
    local_18 = FUN_053a21ec(*(undefined8 *)(lVar13 + 0xd0));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(*(long *)(this + 0x28) + 0xd0));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      lVar13 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      iVar5 = FUN_05474184(lVar13 + 0x38);
      uVar14 = *(undefined8 *)(lVar13 + 0x40);
      iVar4 = iVar4 + iVar5 + 8;
      iVar5 = FUN_053a11c0(uVar14,*(undefined8 *)(lVar13 + 0x48));
      if (0 < iVar5) {
        lVar9 = 0;
        do {
          lVar1 = lVar9 + 1;
          FUN_053a11cc(uVar14,lVar9);
          iVar6 = FUN_05474184();
          iVar4 = iVar6 + iVar4 + 4;
          lVar9 = lVar1;
        } while ((int)lVar1 < iVar5);
      }
      uVar14 = *(undefined8 *)(lVar13 + 0x58);
      iVar4 = iVar4 + 4;
      iVar5 = FUN_053a11c0(uVar14,*(undefined8 *)(lVar13 + 0x60));
      if (0 < iVar5) {
        lVar9 = 0;
        do {
          lVar1 = lVar9 + 1;
          FUN_053a11cc(uVar14,lVar9);
          iVar6 = FUN_05474184();
          iVar4 = iVar6 + iVar4 + 4;
          lVar9 = lVar1;
        } while ((int)lVar1 < iVar5);
      }
      iVar5 = FUN_053a1184(*(undefined8 *)(lVar13 + 0x70),*(undefined8 *)(lVar13 + 0x78));
      iVar6 = FUN_053a113c(*(undefined8 *)(lVar13 + 0x90),*(undefined8 *)(lVar13 + 0x98));
      iVar7 = FUN_05474184(lVar13 + 0xf8);
      iVar4 = iVar7 + iVar4 + iVar5 * 4 + iVar6 * 0x26 + 0x60;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    lVar13 = *(long *)(this + 0x28);
    iVar6 = FUN_05474184(lVar13 + 0x110);
    iVar5 = FUN_054765d0(lVar13 + 0x118);
    uVar14 = *(undefined8 *)(this + 0x38);
    iVar5 = iVar5 + iVar4 + 0x10 + iVar6;
    iVar4 = FUN_053a11c0(uVar14,*(undefined8 *)(this + 0x40));
    for (lVar13 = 0; (int)lVar13 < iVar4; lVar13 = lVar13 + 1) {
      FUN_053a11cc(uVar14,lVar13);
      iVar6 = FUN_05474184();
      iVar5 = iVar6 + iVar5 + 4;
    }
    param_2 = iVar5 + 10;
  }
  if (param_1 != (void *)0x0) {
    local_28 = param_1;
    SMemW(&local_28,this + 0x18,4);
    SMemW(&local_28,this + 0x1c,4);
    SMemW(&local_28,this + 0x20,4);
    SMemW(&local_28,this + 0x24,4);
    SMemW(&local_28,(void *)(*(long *)(this + 0x28) + 0x88),1);
    SMemW(&local_28,(void *)(*(long *)(this + 0x28) + 0x98),4);
    local_38 = std::
               map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
               ::size((map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
                       *)(*(long *)(this + 0x28) + 0xa0));
    SMemW(&local_28,&local_38,4);
    local_20 = std::
               map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
               ::begin((map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
                        *)(*(long *)(this + 0x28) + 0xa0));
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(*(long *)(this + 0x28) + 0xa0));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      puVar8 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      local_18 = CONCAT62(local_18._2_6_,(short)*puVar8);
      lVar13 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      local_10 = CONCAT62(local_10._2_6_,(short)*(undefined4 *)(lVar13 + 4));
      SMemW(&local_28,(rbtree_iterator *)&local_18,2);
      SMemW(&local_28,(string *)&local_10,2);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    local_34 = std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::size
                         ((list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>> *)
                          (*(long *)(this + 0x28) + 0xd0));
    SMemW(&local_28,&local_34,4);
    local_18 = FUN_053a21ec(*(undefined8 *)(*(long *)(this + 0x28) + 0xd0));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(*(long *)(this + 0x28) + 0xd0));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      lVar13 = 0;
      lVar9 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                        ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      SMemWStr(&local_28,(string *)(lVar9 + 0x38));
      local_30 = FUN_053a11c0(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48));
      SMemW(&local_28,&local_30,4);
      if (0 < local_30) {
        do {
          psVar10 = (string *)FUN_053a11cc(*(undefined8 *)(lVar9 + 0x40),lVar13);
          SMemWStr(&local_28,psVar10);
          iVar4 = (int)lVar13;
          lVar13 = lVar13 + 1;
        } while (iVar4 + 1 < local_30);
      }
      lVar13 = 0;
      local_30 = FUN_053a11c0(*(undefined8 *)(lVar9 + 0x58),*(undefined8 *)(lVar9 + 0x60));
      SMemW(&local_28,&local_30,4);
      if (0 < local_30) {
        do {
          psVar10 = (string *)FUN_053a11cc(*(undefined8 *)(lVar9 + 0x58),lVar13);
          SMemWStr(&local_28,psVar10);
          iVar4 = (int)lVar13;
          lVar13 = lVar13 + 1;
        } while (iVar4 + 1 < local_30);
      }
      local_2c = FUN_053a1184(*(undefined8 *)(lVar9 + 0x70),*(undefined8 *)(lVar9 + 0x78));
      SMemW(&local_28,&local_2c,4);
      iVar4 = local_2c;
      if (local_2c != 0) {
        pvVar11 = (void *)FUN_053a1190(*(undefined8 *)(lVar9 + 0x70),0);
        SMemW(&local_28,pvVar11,iVar4 << 2);
      }
      lVar13 = 0;
      uVar3 = FUN_053a113c(*(undefined8 *)(lVar9 + 0x90),*(undefined8 *)(lVar9 + 0x98));
      local_10 = CONCAT44(local_10._4_4_,uVar3);
      SMemW(&local_28,(string *)&local_10,4);
      if (0 < (int)local_10) {
        do {
          pvVar11 = (void *)FUN_053a1130(*(undefined8 *)(lVar9 + 0x90),lVar13);
          pvVar12 = (void *)FUN_053a1128(*(undefined8 *)(lVar9 + 0xa8),
                                         (long)*(int *)((long)pvVar11 + 0x24));
          SMemW(&local_28,pvVar12,2);
          SMemW(&local_28,pvVar11,0x10);
          SMemW(&local_28,(void *)((long)pvVar11 + 0x10),8);
          SMemW(&local_28,(void *)((long)pvVar11 + 0x18),2);
          SMemW(&local_28,(void *)((long)pvVar11 + 0x1a),2);
          SMemW(&local_28,(void *)((long)pvVar11 + 0x1c),4);
          SMemW(&local_28,(void *)((long)pvVar11 + 0x20),4);
          iVar4 = (int)lVar13;
          lVar13 = lVar13 + 1;
        } while (iVar4 + 1 < (int)local_10);
      }
      SMemW(&local_28,(void *)(lVar9 + 0xc0),0x10);
      SMemW(&local_28,(void *)(lVar9 + 0xd0),0x10);
      SMemWStr(&local_28,(string *)(lVar9 + 0xf8));
      SMemW(&local_28,(void *)(lVar9 + 0x100),4);
      SMemW(&local_28,(void *)(lVar9 + 0x104),8);
      SMemW(&local_28,(void *)(lVar9 + 0x10c),4);
      SMemW(&local_28,(void *)(lVar9 + 0x110),4);
      SMemW(&local_28,(void *)(lVar9 + 0x114),4);
      SMemW(&local_28,(void *)(lVar9 + 0x118),4);
      SMemW(&local_28,(void *)(lVar9 + 0x11c),4);
      SMemW(&local_28,(void *)(lVar9 + 0x120),4);
      SMemW(&local_28,(void *)(lVar9 + 0x124),4);
      SMemW(&local_28,(void *)(lVar9 + 0x128),4);
      SMemW(&local_28,(void *)(lVar9 + 300),4);
      SMemW(&local_28,(void *)(lVar9 + 0x130),4);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    lVar13 = 0;
    SMemWStr(&local_28,(string *)(*(long *)(this + 0x28) + 0x110));
    Sexy::ToString((wstring *)(*(long *)(this + 0x28) + 0x118));
    SMemWStr(&local_28,(string *)&local_10);
    std::string::~string((string *)&local_10);
    SMemW(&local_28,this + 0x30,4);
    uVar3 = FUN_053a11c0(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
    local_10 = CONCAT44(local_10._4_4_,uVar3);
    SMemW(&local_28,(string *)&local_10,4);
    if (0 < (int)local_10) {
      do {
        psVar10 = (string *)FUN_053a11cc(*(undefined8 *)(this + 0x38),lVar13);
        SMemWStr(&local_28,psVar10);
        iVar4 = (int)lVar13;
        lVar13 = lVar13 + 1;
      } while (iVar4 + 1 < (int)local_10);
    }
    SMemW(&local_28,this + 0x68,8);
    SMemW(&local_28,this + 0x70,1);
    SMemW(&local_28,this + 0x50,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::WriteToCache(std::string const&, std::string const&) */

void __thiscall Sexy::ImageFont::WriteToCache(ImageFont *this,string *param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_053a1100();
  if (cVar1 != '\0') {
    iVar2 = SerializeWrite(this,(void *)0x0,0);
    FUN_031f5e7c(asStack_10,"ImageFontWide2:",param_2);
    pvVar3 = (void *)FUN_053a1120();
    if (pvVar3 == (void *)0x0) {
      std::string::~string(asStack_10);
    }
    else {
      SerializeWrite(this,pvVar3,iVar2);
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::HasTag(std::string const&) */

void __thiscall Sexy::ImageFont::HasTag(ImageFont *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::PushLayerColor(std::string const&, Sexy::Color const&) */

void __thiscall Sexy::ImageFont::PushLayerColor(ImageFont *this,string *param_1,Color *param_2)

{
  bool bVar1;
  int iVar2;
  ActiveFontLayer *this_00;
  char *__s1;
  char *pcVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xf8))();
  std::operator+(param_1,"__MOD");
  local_18 = FUN_053a2344(*(undefined8 *)(this + 0x58));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x58));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      std::string::~string(asStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (ActiveFontLayer *)
              std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                        ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    __s1 = (char *)FUN_0547429c(*(long *)(this_00 + 8) + 0x38);
    pcVar3 = (char *)FUN_0547429c(param_1);
    iVar2 = strcasecmp(__s1,pcVar3);
    if (iVar2 == 0) {
LAB_053a4d88:
      ActiveFontLayer::PushColor(this_00,param_2);
    }
    else {
      pcVar3 = (char *)FUN_0547429c(asStack_20);
      iVar2 = strcasecmp(__s1,pcVar3);
      if (iVar2 == 0) goto LAB_053a4d88;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::PushLayerColor(int, Sexy::Color const&) */

void __thiscall Sexy::ImageFont::PushLayerColor(ImageFont *this,int param_1,Color *param_2)

{
  string *psVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xf8))();
  local_18 = FUN_053a21ec(*(undefined8 *)(*(long *)(this + 0x28) + 0xd0));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(*(long *)(this + 0x28) + 0xd0));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
LAB_053a4f00:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar3 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                      ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    psVar1 = (string *)(lVar3 + 0x38);
    uVar4 = FUN_05474184(psVar1);
    if (uVar4 < 6) {
LAB_053a4e64:
      if (iVar5 == param_1) {
        PushLayerColor(this,psVar1,param_2);
        goto LAB_053a4f00;
      }
      iVar5 = iVar5 + 1;
    }
    else {
      FUN_05475ffc((string *)&local_10,psVar1,uVar4 - 5,0xffffffffffffffff);
      bVar2 = std::operator!=((string *)&local_10,"__MOD");
      std::string::~string((string *)&local_10);
      if (bVar2) goto LAB_053a4e64;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::RemoveTag(std::string const&) */

void __thiscall Sexy::ImageFont::RemoveTag(ImageFont *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  string *local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  StringToUpper((Sexy *)param_1,___stack_chk_guard);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,asStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (!bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<std::string,std::allocator<std::string>>::erase
              ((vector<std::string,std::allocator<std::string>> *)this_00,local_10);
    this[0x51] = (ImageFont)0x0;
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(!bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::~ImageFont() */

void __thiscall Sexy::ImageFont::~ImageFont(ImageFont *this)

{
  set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>> *this_00;
  undefined8 uVar1;
  _func_void *extraout_x1;
  AutoCrit aAStack_18 [8];
  ImageFont *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06a36f00;
  AutoCrit::AutoCrit(aAStack_18,(CritSect *)(gSexyAppBase + 0x10c));
  this_00 = (set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>> *)
            (gSexyAppBase + 0x4d8);
  local_10 = this;
  uVar1 = std::set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>>::
          find(this_00,&local_10);
  std::set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>>::
  erase_abi_cxx11_(this_00,uVar1);
  AutoCrit::~AutoCrit(aAStack_18);
  FontData::DeRef(*(FontData **)(this + 0x28));
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_10,extraout_x1);
  RtMixedPtrBase::SetId((RtMixedPtrBase *)(this + 0x78),(RtId *)&local_10,false);
  RtId::~RtId((RtId *)&local_10);
  RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)(this + 0x78));
  std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::~list
            ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  Font::~Font((Font *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ImageFont::~ImageFont() */

void __thiscall Sexy::ImageFont::~ImageFont(ImageFont *this)

{
  ~ImageFont(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::ImageFont() */

void __thiscall Sexy::ImageFont::ImageFont(ImageFont *this)

{
  FontData *this_00;
  AutoCrit aAStack_18 [8];
  ImageFont *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Font::Font((Font *)this);
  *(undefined ***)this = &PTR_GetClass_06a36f00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x58));
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  AutoCrit::AutoCrit(aAStack_18,(CritSect *)(gSexyAppBase + 0x10c));
  local_10 = this;
  std::set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>>::insert
            ((set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>> *)
             (gSexyAppBase + 0x4d8),&local_10);
  AutoCrit::~AutoCrit(aAStack_18);
  this[0x71] = (ImageFont)0x0;
  *(undefined8 *)(this + 0x68) = 0x3ff0000000000000;
  this_00 = ::operator_new(0x128);
  FontData::FontData(this_00);
  *(FontData **)(this + 0x28) = this_00;
  FontData::Ref(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ImageFont::StaticNew() */

ImageFont * Sexy::ImageFont::StaticNew(void)

{
  ImageFont *this;
  
  this = ::operator_new(0x88);
  ImageFont(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::GetMappedChar(wchar_t) */

void __thiscall Sexy::ImageFont::GetMappedChar(ImageFont *this,wchar_t param_1)

{
  wchar_t wVar1;
  bool bVar2;
  long lVar3;
  wchar_t local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
             ::find((map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
                     *)(*(long *)(this + 0x28) + 0xa0),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(*(long *)(this + 0x28) + 0xa0));
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  wVar1 = local_24[0];
  if (bVar2) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    wVar1 = *(wchar_t *)(lVar3 + 4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(wVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::CharWidthKern(wchar_t, wchar_t) */

void __thiscall Sexy::ImageFont::CharWidthKern(ImageFont *this,wchar_t param_1,wchar_t param_2)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  long lVar7;
  FontLayer *this_00;
  long lVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xf8))();
  dVar13 = (double)*(int *)(this + 0x30) * *(double *)(this + 0x68);
  wVar5 = GetMappedChar(this,param_1);
  wVar6 = L'\0';
  if (param_2 != L'\0') {
    wVar6 = GetMappedChar(this,param_2);
  }
  iVar12 = 0;
  local_18 = FUN_053a2344(*(undefined8 *)(this + 0x58));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x58));
    bVar4 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar4) break;
    lVar7 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                      ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    this_00 = *(FontLayer **)(lVar7 + 8);
    iVar2 = *(int *)(this_00 + 0x118);
    if (iVar2 == 0) {
      lVar8 = FontLayer::GetCharData(this_00,wVar5);
      if ((double)*(int *)(lVar8 + 0x1c) * *(double *)(this + 0x68) < 0.0) {
        lVar8 = FontLayer::GetCharData(*(FontLayer **)(lVar7 + 8),wVar5);
        dVar14 = *(double *)(this + 0x68) * (double)*(int *)(lVar8 + 0x1c) + -0.501;
      }
      else {
        lVar8 = FontLayer::GetCharData(*(FontLayer **)(lVar7 + 8),wVar5);
        dVar14 = *(double *)(this + 0x68) * (double)*(int *)(lVar8 + 0x1c) + 0.501;
      }
      iVar10 = (int)dVar14;
      iVar11 = 0;
      if (wVar6 != L'\0') {
        iVar11 = *(int *)(*(FontLayer **)(lVar7 + 8) + 0x10c);
        lVar8 = FontLayer::GetCharData(*(FontLayer **)(lVar7 + 8),wVar6);
        uVar3 = *(ushort *)(lVar8 + 0x1a);
        if (uVar3 != 0) {
          puVar9 = (ushort *)
                   FUN_053a1190(*(undefined8 *)(*(long *)(lVar7 + 8) + 0x70),
                                *(undefined2 *)(lVar8 + 0x18));
          puVar1 = puVar9 + ((ulong)(uVar3 - 1) + 1) * 2;
          do {
            if ((uint)*puVar9 == wVar5) {
              iVar11 = iVar11 + (int)((double)(int)(short)puVar9[1] * *(double *)(this + 0x68));
            }
            puVar9 = puVar9 + 2;
          } while (puVar9 != puVar1);
        }
      }
    }
    else {
      lVar8 = FontLayer::GetCharData(this_00,wVar5);
      dVar14 = (double)iVar2;
      if ((dVar13 * (double)*(int *)(lVar8 + 0x1c)) / dVar14 < 0.0) {
        lVar8 = FontLayer::GetCharData(*(FontLayer **)(lVar7 + 8),wVar5);
        dVar14 = (dVar13 * (double)*(int *)(lVar8 + 0x1c)) / dVar14 - 0.501;
      }
      else {
        lVar8 = FontLayer::GetCharData(*(FontLayer **)(lVar7 + 8),wVar5);
        dVar14 = (dVar13 * (double)*(int *)(lVar8 + 0x1c)) / dVar14 + 0.501;
      }
      iVar10 = (int)dVar14;
      iVar11 = 0;
      if (wVar6 != L'\0') {
        iVar11 = *(int *)(*(FontLayer **)(lVar7 + 8) + 0x10c);
        lVar8 = FontLayer::GetCharData(*(FontLayer **)(lVar7 + 8),wVar6);
        uVar3 = *(ushort *)(lVar8 + 0x1a);
        if (uVar3 != 0) {
          puVar9 = (ushort *)
                   FUN_053a1190(*(undefined8 *)(*(long *)(lVar7 + 8) + 0x70),
                                *(undefined2 *)(lVar8 + 0x18));
          puVar1 = puVar9 + ((ulong)(uVar3 - 1) + 1) * 2;
          do {
            if ((uint)*puVar9 == wVar5) {
              iVar11 = iVar11 + (int)((dVar13 / (double)iVar2) * (double)(int)(short)puVar9[1]);
            }
            puVar9 = puVar9 + 2;
          } while (puVar9 != puVar1);
        }
      }
    }
    if (iVar12 < iVar10 + iVar11) {
      iVar12 = iVar10 + iVar11;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar12);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::DrawStringEx(Sexy::Graphics*, int, int, std::wstring const&, Sexy::Color const&,
   Sexy::TRect<int> const*, std::list<Sexy::TRect<int>, std::allocator<Sexy::TRect<int> > >*, int*)
    */

void __thiscall
Sexy::ImageFont::DrawStringEx
          (ImageFont *this,Graphics *param_1,int param_2,int param_3,wstring *param_4,Color *param_5
          ,TRect *param_6,list *param_7,int *param_8)

{
  ushort *puVar1;
  map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
  *this_00;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  wchar_t *pwVar15;
  long lVar16;
  ushort *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  ulong uVar20;
  Insets *pIVar21;
  Image *pIVar22;
  MemoryImage *pMVar23;
  void *__dest;
  undefined8 *puVar24;
  undefined8 *puVar25;
  RtObject *pRVar26;
  ImageFont *pIVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long *plVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  double dVar37;
  undefined *puVar38;
  int iVar39;
  long *plVar40;
  uint local_ac;
  int local_7c;
  ulong local_70;
  int local_68;
  int local_64;
  wchar_t local_44;
  int local_40;
  int local_3c;
  AutoCrit aAStack_38 [8];
  undefined8 local_30;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_38,(CritSect *)gRenderCritSec);
  plVar40 = &DAT_06c2b740;
  plVar32 = plVar40;
  puVar29 = (undefined8 *)&DAT_06c2af30;
  do {
    plVar13 = plVar32 + 2;
    plVar32[1] = 0;
    *plVar32 = 0;
    puVar29[1] = 0;
    *puVar29 = 0;
    plVar32 = plVar13;
    puVar29 = puVar29 + 2;
  } while (plVar13 != (long *)&DAT_06c2bf40);
  if (param_7 != (list *)0x0) {
    std::list<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::clear
              ((list<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)param_7);
  }
  if (*(char *)(*(long *)(this + 0x28) + 0x88) == '\0') {
    if (param_8 != (int *)0x0) {
      *param_8 = 0;
    }
    AutoCrit::~AutoCrit(aAStack_38);
  }
  else {
    local_ac = 1;
    local_70 = 0;
    (**(code **)(*(long *)this + 0xf8))();
    bVar8 = (bool)Graphics::GetColorizeImages(param_1);
    Graphics::SetColorizeImages(param_1,true);
    uVar31 = 0;
    lVar14 = FUN_054765d0(param_4);
    local_64 = param_2;
    if (lVar14 != 0) {
      do {
        uVar12 = 0;
        pwVar15 = (wchar_t *)FUN_054765fc(param_4,uVar31);
        local_44 = GetMappedChar(this,*pwVar15);
        lVar14 = FUN_054765d0(param_4);
        if (uVar31 < lVar14 - 1U) {
          pwVar15 = (wchar_t *)FUN_054765fc(param_4,local_ac);
          uVar12 = GetMappedChar(this,*pwVar15);
        }
        local_68 = local_64;
        pIVar27 = this + 0x58;
        local_30 = FUN_053a2344(*(undefined8 *)pIVar27);
        puVar38 = &DAT_06beaf20 + (-(local_70 >> 0x1f) & 0xffffffc000000000 | local_70 << 6);
        local_18 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)pIVar27);
        bVar9 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_18);
        if (bVar9) {
          do {
            lVar14 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_30);
            lVar16 = FontLayer::GetCharData(*(FontLayer **)(lVar14 + 8),local_44);
            lVar28 = *(long *)(lVar14 + 8);
            dVar37 = *(double *)(this + 0x68);
            if (*(int *)(lVar28 + 0x118) != 0) {
              dVar37 = dVar37 * ((double)*(int *)(this + 0x30) / (double)*(int *)(lVar28 + 0x118));
            }
            if (dVar37 == 1.0) {
              local_7c = *(int *)(lVar16 + 0x1c);
              iVar11 = local_64 + *(int *)(lVar28 + 0x104) + *(int *)(lVar16 + 0x10);
              iVar39 = 0;
              iVar2 = (*(int *)(lVar28 + 0x108) - *(int *)(lVar28 + 0x11c)) +
                      *(int *)(lVar16 + 0x14) + param_3;
              if (uVar12 != 0) {
                iVar39 = *(int *)(lVar28 + 0x10c);
                uVar7 = *(ushort *)(lVar16 + 0x1a);
                if (uVar7 != 0) {
                  puVar17 = (ushort *)
                            FUN_053a1190(*(undefined8 *)(lVar28 + 0x70),
                                         *(undefined2 *)(lVar16 + 0x18));
                  puVar3 = puVar17 + ((ulong)(uVar7 - 1) + 1) * 2;
                  do {
                    while (*puVar17 != uVar12) {
                      puVar17 = puVar17 + 2;
                      if (puVar17 == puVar3) goto LAB_053a9178;
                    }
                    puVar1 = puVar17 + 1;
                    puVar17 = puVar17 + 2;
                    iVar39 = iVar39 + (short)*puVar1;
                  } while (puVar17 != puVar3);
                }
              }
            }
            else {
              iVar39 = 0;
              local_7c = (int)(dVar37 * (double)*(int *)(lVar16 + 0x1c));
              iVar11 = local_64 +
                       (int)(dVar37 * (double)(*(int *)(lVar28 + 0x104) + *(int *)(lVar16 + 0x10)));
              iVar2 = param_3 - (int)(dVar37 * (double)((*(int *)(lVar28 + 0x11c) -
                                                        *(int *)(lVar28 + 0x108)) -
                                                       *(int *)(lVar16 + 0x14)));
              if (uVar12 != 0) {
                iVar39 = *(int *)(lVar28 + 0x10c);
                uVar7 = *(ushort *)(lVar16 + 0x1a);
                if (uVar7 != 0) {
                  puVar17 = (ushort *)
                            FUN_053a1190(*(undefined8 *)(lVar28 + 0x70),
                                         *(undefined2 *)(lVar16 + 0x18));
                  puVar3 = puVar17 + ((ulong)(uVar7 - 1) + 1) * 2;
                  do {
                    if (*puVar17 == uVar12) {
                      iVar39 = iVar39 + (int)((double)(int)(short)puVar17[1] * dVar37);
                    }
                    puVar17 = puVar17 + 2;
                  } while (puVar17 != puVar3);
                }
              }
            }
LAB_053a9178:
            Color::Color((Color *)&local_28);
            cVar10 = std::vector<Sexy::Color,std::allocator<Sexy::Color>>::empty
                               ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(lVar14 + 200));
            if (cVar10 == '\0') {
              pIVar21 = (Insets *)
                        std::
                        vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
                        ::back((vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
                                *)(lVar14 + 200));
              Insets::Insets((Insets *)&local_18,pIVar21);
              lVar28 = *(long *)(lVar14 + 8);
              local_3c = 0xff;
              local_40 = (*(int *)param_5 * *(int *)(lVar28 + 0xc0) * (int)local_18) / 0xfe01 +
                         ((int)local_18 * *(int *)(lVar28 + 0xd0)) / 0xff;
              piVar18 = eastl::min_alt<int>(&local_40,&local_3c);
              local_28 = *piVar18;
              local_3c = 0xff;
              local_40 = (*(int *)(param_5 + 4) * *(int *)(lVar28 + 0xc4) * local_18._4_4_) / 0xfe01
                         + (local_18._4_4_ * *(int *)(lVar28 + 0xd4)) / 0xff;
              piVar18 = eastl::min_alt<int>(&local_40,&local_3c);
              iStack_24 = *piVar18;
              local_3c = 0xff;
              local_40 = (*(int *)(param_5 + 8) * *(int *)(lVar28 + 200) * local_10) / 0xfe01 +
                         (local_10 * *(int *)(lVar28 + 0xd8)) / 0xff;
              piVar18 = eastl::min_alt<int>(&local_40,&local_3c);
              local_20 = *piVar18;
              local_3c = 0xff;
              local_40 = (*(int *)(param_5 + 0xc) * *(int *)(lVar28 + 0xcc) * local_c) / 0xfe01 +
                         (local_c * *(int *)(lVar28 + 0xdc)) / 0xff;
              piVar18 = eastl::min_alt<int>(&local_40,&local_3c);
              local_1c = *piVar18;
            }
            else {
              lVar28 = *(long *)(lVar14 + 8);
              local_18._0_4_ = 0xff;
              local_3c = (*(int *)param_5 * *(int *)(lVar28 + 0xc0)) / 0xff +
                         *(int *)(lVar28 + 0xd0);
              piVar18 = eastl::min_alt<int>(&local_3c,(int *)&local_18);
              local_28 = *piVar18;
              local_18._0_4_ = 0xff;
              local_3c = (*(int *)(param_5 + 4) * *(int *)(lVar28 + 0xc4)) / 0xff +
                         *(int *)(lVar28 + 0xd4);
              piVar18 = eastl::min_alt<int>(&local_3c,(int *)&local_18);
              iStack_24 = *piVar18;
              local_18._0_4_ = 0xff;
              local_3c = (*(int *)(param_5 + 8) * *(int *)(lVar28 + 200)) / 0xff +
                         *(int *)(lVar28 + 0xd8);
              piVar18 = eastl::min_alt<int>(&local_3c,(int *)&local_18);
              local_20 = *piVar18;
              local_18 = CONCAT44(local_18._4_4_,0xff);
              local_3c = (*(int *)(param_5 + 0xc) * *(int *)(lVar28 + 0xcc)) / 0xff +
                         *(int *)(lVar28 + 0xdc);
              piVar18 = eastl::min_alt<int>(&local_3c,(int *)&local_18);
              local_1c = *piVar18;
            }
            iVar4 = *(int *)(lVar28 + 0x130);
            iVar5 = *(int *)(lVar16 + 0x20);
            if (0xfff < (int)(uint)local_70) break;
            uVar31 = -(ulong)((uint)local_70 >> 0x1f) & 0xffffffc000000000 | local_70 << 6;
            this_00 = (map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                       *)(lVar14 + 0x98);
            *(long *)(&DAT_06beaf20 + uVar31) = lVar14;
            *(ulong *)(&DAT_06beaf44 + uVar31) = CONCAT44(iStack_24,local_28);
            *(ulong *)(&DAT_06beaf4c + uVar31) = CONCAT44(local_1c,local_20);
            *(int *)(&DAT_06beaf28 + uVar31) = iVar11;
            *(int *)(&DAT_06beaf2c + uVar31) = iVar2;
            puVar19 = (undefined4 *)
                      std::
                      map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                      ::operator[](this_00,&local_44);
            *(undefined4 *)(&DAT_06beaf30 + uVar31) = *puVar19;
            lVar16 = std::
                     map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                     ::operator[](this_00,&local_44);
            *(undefined4 *)(&DAT_06beaf34 + uVar31) = *(undefined4 *)(lVar16 + 4);
            lVar16 = std::
                     map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                     ::operator[](this_00,&local_44);
            *(undefined4 *)(&DAT_06beaf38 + uVar31) = *(undefined4 *)(lVar16 + 8);
            lVar16 = std::
                     map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                     ::operator[](this_00,&local_44);
            uVar6 = *(undefined4 *)(*(long *)(lVar14 + 8) + 0x100);
            local_40 = iVar4 + iVar5 + 0x80;
            *(undefined4 *)(&DAT_06beaf3c + uVar31) = *(undefined4 *)(lVar16 + 0xc);
            *(undefined4 *)(&DAT_06beaf40 + uVar31) = uVar6;
            *(undefined8 *)(&DAT_06beaf58 + uVar31) = 0;
            local_3c = 0;
            piVar18 = eastl::max_alt<int>(&local_40,&local_3c);
            local_18 = CONCAT44(local_18._4_4_,0xff);
            piVar18 = eastl::min_alt<int>(piVar18,(int *)&local_18);
            iVar4 = *piVar18;
            if (*(long *)(&DAT_06c2af30 + (long)iVar4 * 8) == 0) {
              (&DAT_06c2b740)[iVar4] = puVar38;
            }
            else {
              *(undefined **)(*(long *)(&DAT_06c2af30 + (long)iVar4 * 8) + 0x38) = puVar38;
            }
            *(undefined **)(&DAT_06c2af30 + (long)iVar4 * 8) = puVar38;
            if (param_7 != (list *)0x0) {
              lVar14 = std::
                       map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                       ::operator[](this_00,&local_44);
              iVar4 = *(int *)(lVar14 + 8);
              lVar14 = std::
                       map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                       ::operator[](this_00,&local_44);
              Insets::Insets((Insets *)&local_18,iVar11,iVar2,iVar4,*(int *)(lVar14 + 0xc));
              std::list<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
                        ((list<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)param_7,
                         (TRect *)&local_18);
            }
            local_70 = (ulong)((uint)local_70 + 1);
            iVar11 = local_64 + local_7c + iVar39;
            puVar38 = puVar38 + 0x40;
            if (local_68 < iVar11) {
              local_68 = iVar11;
            }
            std::_List_const_iterator<Sexy::FontLayer>::operator++
                      ((_List_const_iterator<Sexy::FontLayer> *)&local_30);
            local_18 = std::
                       __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                                 ((TaskResource **)pIVar27);
            bVar9 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_18);
          } while (bVar9);
        }
        local_64 = local_68;
        uVar31 = (ulong)local_ac;
        uVar20 = FUN_054765d0(param_4);
        local_ac = local_ac + 1;
      } while (uVar31 < uVar20);
    }
    if (param_8 != (int *)0x0) {
      *param_8 = local_64 - param_2;
    }
    pIVar21 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)param_1);
    Insets::Insets((Insets *)&local_28,pIVar21);
    do {
      for (plVar32 = (long *)*plVar40; plVar32 != (long *)0x0; plVar32 = (long *)plVar32[7]) {
        if (*plVar32 != 0) {
          iVar11 = Graphics::GetDrawMode(param_1);
          if ((int)plVar32[4] != -1) {
            Graphics::SetDrawMode(param_1,(int)plVar32[4]);
          }
          Insets::Insets((Insets *)&local_18,(Insets *)((long)plVar32 + 0x24));
          Graphics::SetColor(param_1,(Color *)&local_18);
          lVar14 = *plVar32;
          if ((*(char *)(lVar14 + 0x90) == '\0') ||
             (*(char *)(*(long *)(lVar14 + 8) + 0x134) == '\0')) {
LAB_053a99c4:
            pIVar22 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(lVar14 + 0x80));
            lVar14 = plVar32[1];
            iVar2 = *(int *)((long)plVar32 + 0xc);
            Insets::Insets((Insets *)&local_18,(int)plVar32[2],*(int *)((long)plVar32 + 0x14),
                           (int)plVar32[3],*(int *)((long)plVar32 + 0x1c));
            Graphics::DrawImage(param_1,pIVar22,(int)lVar14,iVar2,(TRect *)&local_18);
          }
          else {
            uVar12 = (int)plVar32[5] * 0x970a + *(int *)((long)plVar32 + 0x24) * 0x4ccc +
                     *(int *)((long)plVar32 + 0x2c) * 0x1c28 >> 0x15;
            if ((uVar12 == 7) || (mAlphaCorrectionEnabled == '\0')) goto LAB_053a99c4;
            pIVar22 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(lVar14 + 0x10));
            pMVar23 = RtObject::Cast<Sexy::MemoryImage>((RtObject *)pIVar22);
            cVar10 = FUN_053a10fc(param_1[0x80]);
            if (cVar10 == '\0') {
              if ((pMVar23 == (MemoryImage *)0x0) ||
                 (__dest = *(void **)(pMVar23 + 0x80), __dest == (void *)0x0)) {
                ActiveFontLayer::GenerateAlphaCorrectedImage((int)*plVar32);
                pRVar26 = (RtObject *)
                          RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                pMVar23 = RtObject::Cast<Sexy::MemoryImage>(pRVar26);
                RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                __dest = *(void **)(pMVar23 + 0x80);
              }
              uVar31 = -(ulong)(uVar12 >> 0x1f) & 0xfffffc0000000000 | (ulong)uVar12 << 10;
              puVar29 = (undefined8 *)(FONT_PALETTES + uVar31);
              if (*(int *)((long)__dest + 0x3f8) != *(int *)(FONT_PALETTES + uVar31 + 0x3f8)) {
                memcpy(__dest,puVar29,0x400);
                puVar30 = *(undefined8 **)(pMVar23 + 0x98);
                if (puVar30 != (undefined8 *)0x0) {
                  if ((puVar30 < FONT_PALETTES + uVar31 + 0x10) && (puVar29 < puVar30 + 2)) {
                    lVar14 = 0;
                    do {
                      uVar12 = *(uint *)((long)puVar29 + lVar14) >> 0x18;
                      *(uint *)((long)puVar30 + lVar14) =
                           uVar12 << 0x10 | uVar12 << 0x18 | uVar12 | uVar12 << 8;
                      lVar14 = lVar14 + 4;
                    } while (lVar14 != 0x400);
                  }
                  else {
                    puVar24 = puVar30;
                    do {
                      uVar33 = (undefined1)((ulong)*puVar29 >> 0x18);
                      uVar34 = (undefined1)((ulong)*puVar29 >> 0x38);
                      uVar35 = (undefined1)((ulong)puVar29[1] >> 0x18);
                      uVar36 = (undefined1)((ulong)puVar29[1] >> 0x38);
                      puVar25 = puVar24 + 2;
                      puVar24[1] = CONCAT17(uVar36,CONCAT16(uVar36,CONCAT15(uVar36,CONCAT14(uVar36,
                                                  CONCAT13(uVar35,CONCAT12(uVar35,CONCAT11(uVar35,
                                                  uVar35)))))));
                      *puVar24 = CONCAT17(uVar34,CONCAT16(uVar34,CONCAT15(uVar34,CONCAT14(uVar34,
                                                  CONCAT13(uVar33,CONCAT12(uVar33,CONCAT11(uVar33,
                                                  uVar33)))))));
                      puVar24 = puVar25;
                      puVar29 = puVar29 + 2;
                    } while (puVar25 != puVar30 + 0x80);
                  }
                }
              }
            }
            else {
              pIVar22 = RtMixedPtr::operator_cast_to_Image_
                                  ((RtMixedPtr *)(*plVar32 + ((long)(int)uVar12 + 1) * 0x10));
              pMVar23 = RtObject::Cast<Sexy::MemoryImage>((RtObject *)pIVar22);
              if (((pMVar23 == (MemoryImage *)0x0) || (*(long *)(pMVar23 + 0x80) == 0)) ||
                 (*(int *)(*(long *)(pMVar23 + 0x80) + 0x3f8) !=
                  *(int *)(FONT_PALETTES + (long)(int)uVar12 * 0x400 + 0x3f8))) {
                ActiveFontLayer::GenerateAlphaCorrectedImage((int)*plVar32);
                pRVar26 = (RtObject *)
                          RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                pMVar23 = RtObject::Cast<Sexy::MemoryImage>(pRVar26);
                RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              }
            }
            lVar14 = plVar32[1];
            iVar2 = *(int *)((long)plVar32 + 0xc);
            Insets::Insets((Insets *)&local_18,(int)plVar32[2],*(int *)((long)plVar32 + 0x14),
                           (int)plVar32[3],*(int *)((long)plVar32 + 0x1c));
            Graphics::DrawImage(param_1,(Image *)pMVar23,(int)lVar14,iVar2,(TRect *)&local_18);
          }
          Graphics::SetDrawMode(param_1,iVar11);
        }
      }
      plVar40 = plVar40 + 1;
    } while (plVar40 != (long *)&DAT_06c2bf40);
    Graphics::SetColor(param_1,(Color *)&local_28);
    Graphics::SetColorizeImages(param_1,bVar8);
    AutoCrit::~AutoCrit(aAStack_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::ImageFont(Sexy::Image*) */

void __thiscall Sexy::ImageFont::ImageFont(ImageFont *this,Image *param_1)

{
  RtMixedPtrBase *this_00;
  long lVar1;
  undefined4 uVar2;
  FontData *pFVar3;
  Image *pIVar4;
  long lVar5;
  long local_148;
  ImageFont *local_140 [39];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Font::Font((Font *)this);
  *(undefined ***)this = &PTR_GetClass_06a36f00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x58));
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  AutoCrit::AutoCrit((AutoCrit *)&local_148,(CritSect *)(gSexyAppBase + 0x10c));
  local_140[0] = this;
  std::set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>>::insert
            ((set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>> *)
             (gSexyAppBase + 0x4d8),local_140);
  AutoCrit::~AutoCrit((AutoCrit *)&local_148);
  this[0x71] = (ImageFont)0x0;
  *(undefined8 *)(this + 0x68) = 0x3ff0000000000000;
  pFVar3 = ::operator_new(0x128);
  FontData::FontData(pFVar3);
  *(FontData **)(this + 0x28) = pFVar3;
  FontData::Ref(pFVar3);
  pFVar3 = *(FontData **)(this + 0x28);
  pFVar3[0x88] = (FontData)0x1;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(pFVar3 + 0x98);
  this[0x51] = (ImageFont)0x0;
  this[0x70] = (ImageFont)0x0;
  this[0x50] = (ImageFont)0x0;
  FontLayer::FontLayer((FontLayer *)local_140,pFVar3);
  std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::push_back
            ((list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>> *)(pFVar3 + 0xd0),
             (FontLayer *)local_140);
  FontLayer::~FontLayer((FontLayer *)local_140);
  local_148 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                        ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                         (*(long *)(this + 0x28) + 0xd0));
  lVar5 = *(long *)(this + 0x28);
  std::pair<std::string_const,Sexy::FontLayer*>::pair<char_const(&)[1],Sexy::FontLayer*&,void>
            ((pair<std::string_const,Sexy::FontLayer*> *)local_140,"",(FontLayer **)&local_148);
  std::
  map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
  ::insert<std::pair<std::string_const,Sexy::FontLayer*>,void>
            ((map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
              *)(lVar5 + 0xe0),(pair *)local_140);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_140);
  ResourceManager::RegisterResource
            (*(ResourceManager **)(gSexyAppBase + 0x848),(RtMixedPtrBase *)(this + 0x78),
             (BaseResource *)param_1);
  this_00 = (RtMixedPtrBase *)(local_148 + 0xe0);
  RtMixedPtrBase::GetId();
  RtMixedPtrBase::SetId(this_00,(RtId *)local_140,false);
  RtId::~RtId((RtId *)local_140);
  lVar5 = local_148;
  pIVar4 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_148 + 0xe0));
  uVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pIVar4);
  lVar1 = local_148;
  *(undefined4 *)(lVar5 + 0x128) = uVar2;
  pIVar4 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_148 + 0xe0));
  uVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pIVar4);
  *(undefined4 *)(lVar1 + 0x11c) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::ImageFont(Sexy::ImageFont const&) */

void __thiscall Sexy::ImageFont::ImageFont(ImageFont *this,ImageFont *param_1)

{
  undefined4 uVar1;
  ImageFont IVar2;
  undefined8 uVar3;
  AutoCrit aAStack_18 [8];
  ImageFont *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Font::Font((Font *)this,(Font *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined ***)this = &PTR_GetClass_06a36f00;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  IVar2 = param_1[0x50];
  this[0x51] = param_1[0x51];
  this[0x50] = IVar2;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x58));
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  IVar2 = param_1[0x71];
  this[0x70] = param_1[0x70];
  this[0x71] = IVar2;
  *(undefined8 *)(this + 0x68) = uVar3;
  RtMixedPtr<Sexy::Image>::RtMixedPtr
            ((RtMixedPtr<Sexy::Image> *)(this + 0x78),(RtMixedPtr *)(param_1 + 0x78));
  AutoCrit::AutoCrit(aAStack_18,(CritSect *)(gSexyAppBase + 0x10c));
  local_10 = this;
  std::set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>>::insert
            ((set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>> *)
             (gSexyAppBase + 0x4d8),&local_10);
  AutoCrit::~AutoCrit(aAStack_18);
  FontData::Ref(*(FontData **)(this + 0x28));
  if (this[0x51] != (ImageFont)0x0) {
    std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::operator=
              ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 0x58),
               (list *)(param_1 + 0x58));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ImageFont::Duplicate() */

ImageFont * __thiscall Sexy::ImageFont::Duplicate(ImageFont *this)

{
  ImageFont *this_00;
  
  this_00 = ::operator_new(0x88);
  ImageFont(this_00,this);
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::AddTag(std::string const&) */

void __thiscall Sexy::ImageFont::AddTag(ImageFont *this,string *param_1)

{
  char cVar1;
  string *extraout_x1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xe8))();
  if (cVar1 == '\0') {
    StringToUpper((Sexy *)param_1,extraout_x1);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),asStack_10);
    this[0x51] = (ImageFont)0x0;
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 == '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::SerializeReadEndian(void*, int) */

void Sexy::ImageFont::SerializeReadEndian(void *param_1,int param_2)

{
  RtMixedPtr<Sexy::Image> *this;
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined2 extraout_w0;
  undefined2 extraout_w0_00;
  undefined2 extraout_w0_01;
  undefined4 extraout_w0_02;
  undefined4 extraout_w0_03;
  undefined4 extraout_w0_04;
  undefined4 extraout_w0_05;
  undefined4 extraout_w0_06;
  int extraout_w0_07;
  undefined4 extraout_w0_08;
  int extraout_w0_09;
  uint extraout_w0_10;
  uint extraout_w0_11;
  int extraout_w0_12;
  wchar_t extraout_w0_13;
  uint extraout_w0_14;
  undefined4 extraout_w0_15;
  undefined4 extraout_w0_16;
  undefined4 extraout_w0_17;
  undefined4 extraout_w0_18;
  undefined4 extraout_w0_19;
  undefined4 extraout_w0_20;
  undefined4 extraout_w0_21;
  undefined4 extraout_w0_22;
  undefined4 extraout_w0_23;
  undefined4 extraout_w0_24;
  undefined4 extraout_w0_25;
  undefined4 extraout_w0_26;
  undefined4 extraout_w0_27;
  undefined4 extraout_w0_28;
  undefined4 extraout_w0_29;
  undefined4 extraout_w0_30;
  undefined4 extraout_w0_31;
  undefined4 extraout_w0_32;
  undefined4 extraout_w0_33;
  undefined4 extraout_w0_34;
  undefined4 extraout_w0_35;
  undefined4 extraout_w0_36;
  undefined4 extraout_w0_37;
  undefined4 extraout_w0_38;
  undefined4 extraout_w0_39;
  undefined4 extraout_w0_40;
  undefined4 extraout_w0_41;
  undefined4 extraout_w0_42;
  undefined4 extraout_w0_43;
  undefined4 extraout_w0_44;
  wchar_t extraout_w0_45;
  undefined4 extraout_w0_46;
  uint uVar4;
  undefined4 *puVar5;
  Image *pIVar6;
  DeviceImage *pDVar7;
  InfoClass *pIVar8;
  void *pvVar9;
  string *psVar10;
  long lVar11;
  int iVar12;
  ResourceManager *this_00;
  int iVar13;
  wchar_t wVar14;
  FontData *pFVar15;
  undefined8 extraout_d0;
  int local_164;
  int local_160;
  uint local_15c;
  int local_158;
  wchar_t local_154;
  void *local_150;
  undefined8 local_148;
  undefined2 local_140 [156];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((void *)(ulong)(uint)param_2 != (void *)0x0) {
    local_150 = (void *)(ulong)(uint)param_2;
    SMemR(&local_150,(void *)((long)param_1 + 0x18),4);
    nop();
    *(undefined4 *)((long)param_1 + 0x18) = extraout_w0_02;
    SMemR(&local_150,(void *)((long)param_1 + 0x1c),4);
    nop();
    *(undefined4 *)((long)param_1 + 0x1c) = extraout_w0_03;
    SMemR(&local_150,(void *)((long)param_1 + 0x20),4);
    nop();
    *(undefined4 *)((long)param_1 + 0x20) = extraout_w0_04;
    SMemR(&local_150,(void *)((long)param_1 + 0x24),4);
    nop();
    *(undefined4 *)((long)param_1 + 0x24) = extraout_w0_05;
    lVar11 = *(long *)((long)param_1 + 0x28);
    *(long *)(lVar11 + 0x90) = gSexyAppBase;
    SMemR(&local_150,(void *)(lVar11 + 0x88),1);
    SMemR(&local_150,(void *)(*(long *)((long)param_1 + 0x28) + 0x98),4);
    lVar11 = *(long *)((long)param_1 + 0x28);
    nop();
    *(undefined4 *)(lVar11 + 0x98) = extraout_w0_06;
    SMemR(&local_150,&local_164,4);
    nop();
    if (0 < extraout_w0_07) {
      iVar13 = 0;
      local_164 = extraout_w0_07;
      do {
        iVar13 = iVar13 + 1;
        SMemR(&local_150,&local_15c,2);
        nop();
        local_15c = CONCAT22(local_15c._2_2_,extraout_w0);
        SMemR(&local_150,&local_158,2);
        nop();
        lVar11 = *(long *)((long)param_1 + 0x28);
        local_158 = CONCAT22(local_158._2_2_,(short)extraout_w0_08);
        local_154 = local_15c & 0xffff;
        local_148 = CONCAT44(local_148._4_4_,extraout_w0_08) & 0xffffffff0000ffff;
        std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                  ((pair<wchar_t_const,wchar_t> *)local_140,&local_154,(wchar_t *)&local_148);
        std::
        map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>::
        insert<std::pair<wchar_t_const,wchar_t>,void>
                  ((map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
                    *)(lVar11 + 0xa0),(pair *)local_140);
      } while (iVar13 < local_164);
    }
    param_2 = 1;
    SMemR(&local_150,&local_160,4);
    nop();
    if (0 < extraout_w0_09) {
      iVar13 = 0;
      uVar4 = 0;
      local_160 = extraout_w0_09;
      do {
        pFVar15 = *(FontData **)((long)param_1 + 0x28);
        iVar12 = 0;
        FontLayer::FontLayer((FontLayer *)local_140,pFVar15);
        std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::push_back
                  ((list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>> *)(pFVar15 + 0xd0),
                   (FontLayer *)local_140);
        FontLayer::~FontLayer((FontLayer *)local_140);
        local_148 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                              ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                               (*(long *)((long)param_1 + 0x28) + 0xd0));
        FUN_053a1070(&local_150,local_148 + 0x38);
        lVar11 = *(long *)((long)param_1 + 0x28);
        std::pair<std::string_const,Sexy::FontLayer*>::pair<std::string&,Sexy::FontLayer*&,void>
                  ((pair<std::string_const,Sexy::FontLayer*> *)local_140,
                   (string *)(local_148 + 0x38),(FontLayer **)&local_148);
        std::
        map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
        ::insert<std::pair<std::string_const,Sexy::FontLayer*>,void>
                  ((map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
                    *)(lVar11 + 0xe0),(pair *)local_140);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_140);
        SMemR(&local_150,&local_15c,4);
        nop();
        local_15c = extraout_w0_10;
        if (0 < (int)extraout_w0_10) {
          do {
            iVar12 = iVar12 + 1;
            Set8BytesTo0((FontLayer *)local_140);
            FUN_053a1070(&local_150,(FontLayer *)local_140);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)(local_148 + 0x40),
                       (string *)local_140);
            std::string::~string((string *)local_140);
          } while (iVar12 < (int)local_15c);
        }
        iVar12 = 0;
        SMemR(&local_150,&local_15c,4);
        nop();
        local_15c = extraout_w0_11;
        if (0 < (int)extraout_w0_11) {
          do {
            iVar12 = iVar12 + 1;
            Set8BytesTo0((FontLayer *)local_140);
            FUN_053a1070(&local_150,(FontLayer *)local_140);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)(local_148 + 0x58),
                       (string *)local_140);
            std::string::~string((string *)local_140);
          } while (iVar12 < (int)local_15c);
        }
        SMemR(&local_150,&local_158,4);
        nop();
        local_158 = extraout_w0_12;
        if (extraout_w0_12 != 0) {
          std::vector<int,std::allocator<int>>::resize
                    ((vector<int,std::allocator<int>> *)(local_148 + 0x70),(long)extraout_w0_12);
          pvVar9 = (void *)FUN_053a1190(*(undefined8 *)(local_148 + 0x70),0);
          SMemR(&local_150,pvVar9,local_158 << 2);
          if (0 < local_158) {
            lVar11 = 0;
            do {
              puVar5 = (undefined4 *)FUN_053a1190(*(undefined8 *)(local_148 + 0x70),lVar11);
              nop();
              *puVar5 = extraout_w0_46;
              iVar12 = (int)lVar11;
              lVar11 = lVar11 + 1;
            } while (iVar12 + 1 < local_158);
          }
        }
        wVar14 = L'\0';
        SMemR(&local_150,&local_154,4);
        nop();
        local_154 = extraout_w0_13;
        if (L'\0' < extraout_w0_13) {
          do {
            wVar14 = wVar14 + L'\x01';
            SMemR(&local_150,(FontLayer *)local_140,2);
            nop();
            local_140[0] = (undefined2)extraout_w0_14;
            puVar5 = (undefined4 *)
                     CharDataHashTable::GetCharData
                               ((CharDataHashTable *)(local_148 + 0x88),extraout_w0_14 & 0xffff,true
                               );
            SMemR(&local_150,puVar5,0x10);
            nop();
            *puVar5 = extraout_w0_15;
            nop();
            puVar5[1] = extraout_w0_16;
            nop();
            puVar5[2] = extraout_w0_17;
            nop();
            puVar5[3] = extraout_w0_18;
            SMemR(&local_150,puVar5 + 4,8);
            nop();
            puVar5[4] = extraout_w0_19;
            nop();
            puVar5[5] = extraout_w0_20;
            SMemR(&local_150,puVar5 + 6,2);
            nop();
            *(undefined2 *)(puVar5 + 6) = extraout_w0_00;
            SMemR(&local_150,(void *)((long)puVar5 + 0x1a),2);
            nop();
            *(undefined2 *)((long)puVar5 + 0x1a) = extraout_w0_01;
            SMemR(&local_150,puVar5 + 7,4);
            nop();
            puVar5[7] = extraout_w0_21;
            SMemR(&local_150,puVar5 + 8,4);
            nop();
            puVar5[8] = extraout_w0_22;
          } while (wVar14 < local_154);
        }
        SMemR(&local_150,(void *)(local_148 + 0xc0),0x10);
        uVar1 = local_148;
        nop();
        uVar2 = local_148;
        *(undefined4 *)(uVar1 + 0xc0) = extraout_w0_23;
        nop();
        uVar1 = local_148;
        *(undefined4 *)(uVar2 + 0xc4) = extraout_w0_24;
        nop();
        uVar2 = local_148;
        *(undefined4 *)(uVar1 + 200) = extraout_w0_25;
        nop();
        *(undefined4 *)(uVar2 + 0xcc) = extraout_w0_26;
        SMemR(&local_150,(void *)(local_148 + 0xd0),0x10);
        uVar1 = local_148;
        nop();
        uVar2 = local_148;
        *(undefined4 *)(uVar1 + 0xd0) = extraout_w0_27;
        nop();
        uVar1 = local_148;
        *(undefined4 *)(uVar2 + 0xd4) = extraout_w0_28;
        nop();
        uVar2 = local_148;
        *(undefined4 *)(uVar1 + 0xd8) = extraout_w0_29;
        nop();
        *(undefined4 *)(uVar2 + 0xdc) = extraout_w0_30;
        FUN_053a1070(&local_150,local_148 + 0xf8);
        lVar11 = *(long *)((long)param_1 + 0x28) + 0x120;
        cVar3 = FUN_0547419c(lVar11);
        if (cVar3 == '\0') {
LAB_053aaba8:
          uVar1 = local_148;
          this_00 = *(ResourceManager **)(gSexyAppBase + 0x848);
          FUN_031dcc6c((FontLayer *)local_140,lVar11,local_148 + 0xf8);
          ResourceManager::GetImage
                    (this_00,(RtMixedPtr *)(uVar1 + 0xe0),(string *)local_140,(GetImageOptions *)0x0
                     ,(bool *)0x0);
          std::string::~string((string *)local_140);
        }
        else {
          pIVar8 = ResourceManager::GetResInfoForPathT<Sexy::Image>
                             (*(ResourceManager **)(gSexyAppBase + 0x848),
                              (string *)(local_148 + 0xf8));
          if (pIVar8 == (InfoClass *)0x0) {
LAB_053aaf88:
            lVar11 = *(long *)((long)param_1 + 0x28) + 0x120;
            goto LAB_053aaba8;
          }
          this = (RtMixedPtr<Sexy::Image> *)(local_148 + 0xe0);
          ResourceInfoTypes::FontRes::GetFont();
          RtMixedPtr<Sexy::Image>::operator=(this,(RtWeakPtrBase *)local_140);
          RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_140);
          pIVar6 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_148 + 0xe0));
          if (pIVar6 == (Image *)0x0) goto LAB_053aaf88;
        }
        pIVar6 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_148 + 0xe0));
        pDVar7 = RtObject::Cast<Sexy::DeviceImage>((RtObject *)pIVar6);
        if (pDVar7 == (DeviceImage *)0x0) {
          uVar4 = 1;
        }
        else {
          pDVar7[0x94] = (DeviceImage)0x1;
        }
        iVar13 = iVar13 + 1;
        SMemR(&local_150,(void *)(local_148 + 0x100),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x100) = extraout_w0_31;
        SMemR(&local_150,(void *)(local_148 + 0x104),8);
        uVar1 = local_148;
        nop();
        uVar2 = local_148;
        *(undefined4 *)(uVar1 + 0x104) = extraout_w0_32;
        nop();
        *(undefined4 *)(uVar2 + 0x108) = extraout_w0_33;
        SMemR(&local_150,(void *)(local_148 + 0x10c),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x10c) = extraout_w0_34;
        SMemR(&local_150,(void *)(local_148 + 0x110),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x110) = extraout_w0_35;
        SMemR(&local_150,(void *)(local_148 + 0x114),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x114) = extraout_w0_36;
        SMemR(&local_150,(void *)(local_148 + 0x118),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x118) = extraout_w0_37;
        SMemR(&local_150,(void *)(local_148 + 0x11c),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x11c) = extraout_w0_38;
        SMemR(&local_150,(void *)(local_148 + 0x120),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x120) = extraout_w0_39;
        SMemR(&local_150,(void *)(local_148 + 0x124),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x124) = extraout_w0_40;
        SMemR(&local_150,(void *)(local_148 + 0x128),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x128) = extraout_w0_41;
        SMemR(&local_150,(void *)(local_148 + 300),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 300) = extraout_w0_42;
        SMemR(&local_150,(void *)(local_148 + 0x130),4);
        uVar1 = local_148;
        nop();
        *(undefined4 *)(uVar1 + 0x130) = extraout_w0_43;
      } while (iVar13 < local_160);
      param_2 = uVar4 ^ 1;
    }
    wVar14 = L'\0';
    FUN_053a1070(&local_150,*(long *)((long)param_1 + 0x28) + 0x110);
    Set8BytesTo0((Sexy *)&local_148);
    FUN_053a1070(&local_150,(Sexy *)&local_148);
    psVar10 = *(string **)((long)param_1 + 0x28);
    ToSexyString((Sexy *)&local_148,psVar10);
    FUN_054766c8(psVar10 + 0x118,(FontLayer *)local_140);
    FUN_05476c50((FontLayer *)local_140);
    SMemR(&local_150,(void *)((long)param_1 + 0x30),4);
    nop();
    *(undefined4 *)((long)param_1 + 0x30) = extraout_w0_44;
    SMemR(&local_150,&local_154,4);
    nop();
    local_154 = extraout_w0_45;
    if (L'\0' < extraout_w0_45) {
      do {
        wVar14 = wVar14 + L'\x01';
        Set8BytesTo0((FontLayer *)local_140);
        FUN_053a1070(&local_150,(FontLayer *)local_140);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)((long)param_1 + 0x38),
                   (string *)local_140);
        std::string::~string((string *)local_140);
      } while (wVar14 < local_154);
    }
    SMemR(&local_150,(void *)((long)param_1 + 0x68),8);
    nop();
    *(undefined8 *)((long)param_1 + 0x68) = extraout_d0;
    SMemR(&local_150,(void *)((long)param_1 + 0x70),1);
    SMemR(&local_150,(void *)((long)param_1 + 0x50),1);
    *(undefined1 *)((long)param_1 + 0x51) = 0;
    std::string::~string((string *)&local_148);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::SerializeRead(void*, int) */

void Sexy::ImageFont::SerializeRead(void *param_1,int param_2)

{
  RtMixedPtr<Sexy::Image> *this;
  ulong uVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  Image *pIVar5;
  DeviceImage *pDVar6;
  InfoClass *pIVar7;
  string *psVar8;
  long lVar9;
  int iVar10;
  ResourceManager *this_00;
  int iVar11;
  wchar_t wVar12;
  FontData *pFVar13;
  int local_164;
  int local_160;
  uint local_15c;
  int local_158;
  wchar_t local_154;
  void *local_150;
  undefined8 local_148;
  ushort local_140 [156];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((void *)(ulong)(uint)param_2 != (void *)0x0) {
    local_150 = (void *)(ulong)(uint)param_2;
    SMemR(&local_150,(void *)((long)param_1 + 0x18),4);
    SMemR(&local_150,(void *)((long)param_1 + 0x1c),4);
    SMemR(&local_150,(void *)((long)param_1 + 0x20),4);
    SMemR(&local_150,(void *)((long)param_1 + 0x24),4);
    lVar9 = *(long *)((long)param_1 + 0x28);
    *(long *)(lVar9 + 0x90) = gSexyAppBase;
    SMemR(&local_150,(void *)(lVar9 + 0x88),1);
    SMemR(&local_150,(void *)(*(long *)((long)param_1 + 0x28) + 0x98),4);
    SMemR(&local_150,&local_164,4);
    if (0 < local_164) {
      iVar11 = 0;
      do {
        iVar11 = iVar11 + 1;
        SMemR(&local_150,&local_15c,2);
        SMemR(&local_150,&local_158,2);
        lVar9 = *(long *)((long)param_1 + 0x28);
        local_154 = local_15c & 0xffff;
        local_148 = CONCAT44(local_148._4_4_,local_158) & 0xffffffff0000ffff;
        std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                  ((pair<wchar_t_const,wchar_t> *)local_140,&local_154,(wchar_t *)&local_148);
        std::
        map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>::
        insert<std::pair<wchar_t_const,wchar_t>,void>
                  ((map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
                    *)(lVar9 + 0xa0),(pair *)local_140);
      } while (iVar11 < local_164);
    }
    param_2 = 1;
    SMemR(&local_150,&local_160,4);
    if (0 < local_160) {
      iVar11 = 0;
      uVar3 = 0;
      do {
        pFVar13 = *(FontData **)((long)param_1 + 0x28);
        iVar10 = 0;
        FontLayer::FontLayer((FontLayer *)local_140,pFVar13);
        std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::push_back
                  ((list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>> *)(pFVar13 + 0xd0),
                   (FontLayer *)local_140);
        FontLayer::~FontLayer((FontLayer *)local_140);
        local_148 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                              ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                               (*(long *)((long)param_1 + 0x28) + 0xd0));
        SMemRStr(&local_150,(string *)(local_148 + 0x38));
        lVar9 = *(long *)((long)param_1 + 0x28);
        std::pair<std::string_const,Sexy::FontLayer*>::pair<std::string&,Sexy::FontLayer*&,void>
                  ((pair<std::string_const,Sexy::FontLayer*> *)local_140,
                   (string *)(local_148 + 0x38),(FontLayer **)&local_148);
        std::
        map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
        ::insert<std::pair<std::string_const,Sexy::FontLayer*>,void>
                  ((map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
                    *)(lVar9 + 0xe0),(pair *)local_140);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_140);
        SMemR(&local_150,&local_15c,4);
        if (0 < (int)local_15c) {
          do {
            iVar10 = iVar10 + 1;
            Set8BytesTo0((FontLayer *)local_140);
            SMemRStr(&local_150,(string *)local_140);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)(local_148 + 0x40),
                       (string *)local_140);
            std::string::~string((string *)local_140);
          } while (iVar10 < (int)local_15c);
        }
        iVar10 = 0;
        SMemR(&local_150,&local_15c,4);
        if (0 < (int)local_15c) {
          do {
            iVar10 = iVar10 + 1;
            Set8BytesTo0((FontLayer *)local_140);
            SMemRStr(&local_150,(string *)local_140);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)(local_148 + 0x58),
                       (string *)local_140);
            std::string::~string((string *)local_140);
          } while (iVar10 < (int)local_15c);
        }
        SMemR(&local_150,&local_158,4);
        if (local_158 != 0) {
          std::vector<int,std::allocator<int>>::resize
                    ((vector<int,std::allocator<int>> *)(local_148 + 0x70),(long)local_158);
          pvVar4 = (void *)FUN_053a1190(*(undefined8 *)(local_148 + 0x70),0);
          SMemR(&local_150,pvVar4,local_158 << 2);
        }
        wVar12 = L'\0';
        SMemR(&local_150,&local_154,4);
        if (L'\0' < local_154) {
          do {
            wVar12 = wVar12 + L'\x01';
            SMemR(&local_150,(FontLayer *)local_140,2);
            pvVar4 = (void *)CharDataHashTable::GetCharData
                                       ((CharDataHashTable *)(local_148 + 0x88),(uint)local_140[0],
                                        true);
            SMemR(&local_150,pvVar4,0x10);
            SMemR(&local_150,(void *)((long)pvVar4 + 0x10),8);
            SMemR(&local_150,(void *)((long)pvVar4 + 0x18),2);
            SMemR(&local_150,(void *)((long)pvVar4 + 0x1a),2);
            SMemR(&local_150,(void *)((long)pvVar4 + 0x1c),4);
            SMemR(&local_150,(void *)((long)pvVar4 + 0x20),4);
          } while (wVar12 < local_154);
        }
        SMemR(&local_150,(void *)(local_148 + 0xc0),0x10);
        SMemR(&local_150,(void *)(local_148 + 0xd0),0x10);
        SMemRStr(&local_150,(string *)(local_148 + 0xf8));
        lVar9 = *(long *)((long)param_1 + 0x28) + 0x120;
        cVar2 = FUN_0547419c(lVar9);
        if (cVar2 == '\0') {
LAB_053ab418:
          uVar1 = local_148;
          this_00 = *(ResourceManager **)(gSexyAppBase + 0x848);
          FUN_031dcc6c((FontLayer *)local_140,lVar9,local_148 + 0xf8);
          ResourceManager::GetImage
                    (this_00,(RtMixedPtr *)(uVar1 + 0xe0),(string *)local_140,(GetImageOptions *)0x0
                     ,(bool *)0x0);
          std::string::~string((string *)local_140);
        }
        else {
          pIVar7 = ResourceManager::GetResInfoForPathT<Sexy::Image>
                             (*(ResourceManager **)(gSexyAppBase + 0x848),
                              (string *)(local_148 + 0xf8));
          if (pIVar7 == (InfoClass *)0x0) {
LAB_053ab708:
            lVar9 = *(long *)((long)param_1 + 0x28) + 0x120;
            goto LAB_053ab418;
          }
          this = (RtMixedPtr<Sexy::Image> *)(local_148 + 0xe0);
          ResourceInfoTypes::FontRes::GetFont();
          RtMixedPtr<Sexy::Image>::operator=(this,(RtWeakPtrBase *)local_140);
          RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_140);
          pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_148 + 0xe0));
          if (pIVar5 == (Image *)0x0) goto LAB_053ab708;
        }
        pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_148 + 0xe0));
        pDVar6 = RtObject::Cast<Sexy::DeviceImage>((RtObject *)pIVar5);
        if (pDVar6 == (DeviceImage *)0x0) {
          uVar3 = 1;
        }
        else {
          pDVar6[0x94] = (DeviceImage)0x1;
        }
        iVar11 = iVar11 + 1;
        SMemR(&local_150,(void *)(local_148 + 0x100),4);
        SMemR(&local_150,(void *)(local_148 + 0x104),8);
        SMemR(&local_150,(void *)(local_148 + 0x10c),4);
        SMemR(&local_150,(void *)(local_148 + 0x110),4);
        SMemR(&local_150,(void *)(local_148 + 0x114),4);
        SMemR(&local_150,(void *)(local_148 + 0x118),4);
        SMemR(&local_150,(void *)(local_148 + 0x11c),4);
        SMemR(&local_150,(void *)(local_148 + 0x120),4);
        SMemR(&local_150,(void *)(local_148 + 0x124),4);
        SMemR(&local_150,(void *)(local_148 + 0x128),4);
        SMemR(&local_150,(void *)(local_148 + 300),4);
        SMemR(&local_150,(void *)(local_148 + 0x130),4);
      } while (iVar11 < local_160);
      param_2 = uVar3 ^ 1;
    }
    wVar12 = L'\0';
    SMemRStr(&local_150,(string *)(*(long *)((long)param_1 + 0x28) + 0x110));
    Set8BytesTo0((Sexy *)&local_148);
    SMemRStr(&local_150,(string *)&local_148);
    psVar8 = *(string **)((long)param_1 + 0x28);
    ToSexyString((Sexy *)&local_148,psVar8);
    FUN_054766c8(psVar8 + 0x118,(FontLayer *)local_140);
    FUN_05476c50((FontLayer *)local_140);
    SMemR(&local_150,(void *)((long)param_1 + 0x30),4);
    SMemR(&local_150,&local_154,4);
    if (L'\0' < local_154) {
      do {
        wVar12 = wVar12 + L'\x01';
        Set8BytesTo0((FontLayer *)local_140);
        SMemRStr(&local_150,(string *)local_140);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)((long)param_1 + 0x38),
                   (string *)local_140);
        std::string::~string((string *)local_140);
      } while (wVar12 < local_154);
    }
    SMemR(&local_150,(void *)((long)param_1 + 0x68),8);
    SMemR(&local_150,(void *)((long)param_1 + 0x70),1);
    SMemR(&local_150,(void *)((long)param_1 + 0x50),1);
    *(undefined1 *)((long)param_1 + 0x51) = 0;
    std::string::~string((string *)&local_148);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::ReadFromCache(std::string const&, std::string const&) */

void Sexy::ImageFont::ReadFromCache(string *param_1,string *param_2)

{
  char cVar1;
  ImageFont *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_10,"ImageFontWide2:");
  cVar1 = FUN_053a1118();
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    this = (ImageFont *)0x0;
  }
  else {
    this = ::operator_new(0x88);
    ImageFont(this);
    cVar1 = SerializeRead(this,0);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x18))(this);
      this = (ImageFont *)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::GenerateActiveFontLayers() */

void __thiscall Sexy::ImageFont::GenerateActiveFontLayers(ImageFont *this)

{
  uint uVar1;
  list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *this_01;
  long lVar3;
  int iVar4;
  byte bVar5;
  ImageFont IVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  MemoryImage *this_02;
  long lVar18;
  int *piVar19;
  ushort *puVar20;
  TRect *pTVar21;
  Image *pIVar22;
  TRect *pTVar23;
  ulong *puVar24;
  MemoryImage *this_03;
  uint uVar25;
  uint uVar26;
  ulong *puVar27;
  int iVar28;
  TRect *pTVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  int local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  ulong local_1c0;
  int local_1b8;
  int local_1b4;
  undefined8 local_1b0 [25];
  ActiveFontLayer aAStack_e8 [224];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(*(long *)(this + 0x28) + 0x88) != '\0') {
    this_00 = (list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 0x58);
    bVar7 = true;
    std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::clear(this_00);
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    uVar12 = *(undefined8 *)(*(long *)(this + 0x28) + 0xd0);
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    local_1c8 = FUN_053a21ec(uVar12);
    while( true ) {
      local_1b0[0] = std::
                     __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                               ((TaskResource **)(*(long *)(this + 0x28) + 0xd0));
      bVar8 = eastl::operator!=((rbtree_iterator *)&local_1c8,(rbtree_iterator *)local_1b0);
      if (!bVar8) break;
      lVar13 = std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_1c8);
      if ((*(int *)(lVar13 + 0x110) <= *(int *)(this + 0x30)) &&
         ((*(int *)(this + 0x30) <= *(int *)(lVar13 + 0x114) || (*(int *)(lVar13 + 0x114) == -1))))
      {
        bVar8 = true;
        uVar31 = 0;
        pvVar2 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(this + 0x38);
        while( true ) {
          uVar30 = (ulong)uVar31;
          uVar14 = FUN_053a11c0(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x48));
          if (uVar14 <= uVar30) break;
          uVar31 = uVar31 + 1;
          uVar12 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar2);
          uVar15 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar2);
          uVar16 = FUN_053a11cc(*(undefined8 *)(lVar13 + 0x40),uVar30);
          local_1c0 = std::
                      find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                                (uVar12,uVar15,uVar16);
          local_1b0[0] = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(pvVar2);
          bVar9 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_1c0,(__normal_iterator *)local_1b0);
          if (bVar9) {
            bVar8 = false;
          }
        }
        uVar31 = 0;
        pvVar2 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(lVar13 + 0x58);
        while( true ) {
          uVar30 = (ulong)uVar31;
          uVar14 = FUN_053a11c0(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
          if (uVar14 <= uVar30) break;
          uVar31 = uVar31 + 1;
          uVar12 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar2);
          uVar15 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar2);
          uVar16 = FUN_053a11cc(*(undefined8 *)(this + 0x38),uVar30);
          local_1c0 = std::
                      find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                                (uVar12,uVar15,uVar16);
          local_1b0[0] = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(pvVar2);
          bVar9 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_1c0,(__normal_iterator *)local_1b0);
          if (bVar9) {
            bVar8 = false;
          }
        }
        if ((bVar8) || (this[0x50] != (ImageFont)0x0)) {
          ActiveFontLayer::ActiveFontLayer(aAStack_e8);
          std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::push_back
                    (this_00,aAStack_e8);
          ActiveFontLayer::~ActiveFontLayer(aAStack_e8);
          lVar17 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                             (this_00);
          dVar33 = *(double *)(this + 0x68);
          bVar5 = *(byte *)(lVar13 + 0xf0);
          dVar34 = 1.0;
          IVar6 = this[0x71];
          *(long *)(lVar17 + 8) = lVar13;
          *(byte *)(lVar17 + 0x90) = bVar5 & (byte)IVar6;
          iVar10 = *(int *)(lVar13 + 0x118);
          if (dVar33 == 1.0) {
            if ((iVar10 != 0) && (iVar11 = *(int *)(this + 0x30), iVar10 != iVar11))
            goto LAB_053ae9b0;
            pIVar22 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(this + 0x78));
            if (pIVar22 == (Image *)0x0) {
              RtMixedPtrBase::GetId();
              RtMixedPtrBase::SetId((RtMixedPtrBase *)(lVar17 + 0x80),(RtId *)local_1b0,false);
              RtId::~RtId((RtId *)local_1b0);
            }
            else {
              RtMixedPtrBase::GetId();
              RtMixedPtrBase::SetId((RtMixedPtrBase *)(lVar17 + 0x80),(RtId *)local_1b0,false);
              RtId::~RtId((RtId *)local_1b0);
            }
            iVar10 = FUN_053a113c(*(undefined8 *)(lVar13 + 0x90),*(undefined8 *)(lVar13 + 0x98));
            pTVar21 = (TRect *)std::
                               vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                               ::front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                                        *)(lVar13 + 0x90));
            if (0 < iVar10) {
              pTVar29 = pTVar21;
              do {
                puVar20 = (ushort *)
                          FUN_053a1128(*(undefined8 *)(lVar13 + 0xa8),(long)*(int *)(pTVar29 + 0x24)
                                      );
                pTVar23 = pTVar29 + 0x28;
                std::pair<wchar_t_const,Sexy::TRect<int>>::
                pair<unsigned_short&,Sexy::TRect<int>&,void>
                          ((pair<wchar_t_const,Sexy::TRect<int>> *)local_1b0,puVar20,pTVar29);
                std::
                map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                ::insert<std::pair<wchar_t_const,Sexy::TRect<int>>,void>
                          ((map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                            *)(lVar17 + 0x98),(pair *)local_1b0);
                pTVar29 = pTVar23;
              } while (pTVar23 != pTVar21 + ((ulong)(iVar10 - 1) + 1) * 0x28);
            }
            dVar34 = 1.0;
          }
          else {
            if (iVar10 != 0) {
              iVar11 = *(int *)(this + 0x30);
LAB_053ae9b0:
              dVar33 = dVar33 * (double)iVar11;
              dVar34 = (double)iVar10;
            }
            this_01 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *
                      )(lVar13 + 0x90);
            this_02 = ::operator_new(0xf0);
            MemoryImage::MemoryImage(this_02,*(SexyAppBase **)(*(long *)(this + 0x28) + 0x90));
            local_1cc = 0;
            local_1d0 = 0;
            iVar10 = FUN_053a113c(*(undefined8 *)(lVar13 + 0x90),*(undefined8 *)(lVar13 + 0x98));
            lVar18 = std::
                     vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                     front(this_01);
            if (0 < iVar10) {
              bVar8 = true;
              iVar11 = 0;
              lVar32 = lVar18 + ((ulong)(iVar10 - 1) + 1) * 0x28;
              do {
                iVar28 = *(int *)(lVar18 + 0x14);
                local_1c0 = CONCAT44(local_1c0._4_4_,iVar28);
                iVar10 = iVar28 + *(int *)(lVar18 + 0xc);
                local_1b0[0] = CONCAT44(local_1b0[0]._4_4_,iVar10);
                piVar19 = eastl::min_alt<int>((int *)&local_1c0,&local_1d0);
                iVar4 = *piVar19;
                local_1d0 = iVar4;
                piVar19 = eastl::max_alt<int>((int *)local_1b0,&local_1cc);
                local_1cc = *piVar19;
                if ((iVar10 != local_1cc) || (iVar28 != iVar4)) {
                  bVar8 = false;
                }
                piVar19 = (int *)(lVar18 + 8);
                lVar18 = lVar18 + 0x28;
                iVar11 = iVar11 + *piVar19 + 2;
              } while (lVar18 != lVar32);
              if (!bVar8) {
                iVar10 = local_1cc - iVar4;
                this_03 = ::operator_new(0xf0);
                MemoryImage::MemoryImage(this_03,*(SexyAppBase **)(*(long *)(this + 0x28) + 0x90));
                (**(code **)(*(long *)this_03 + 200))(this_03,iVar11,iVar10);
                (**(code **)(*(long *)this_03 + 0x130))(this_03,1,1);
                Graphics::Graphics((Graphics *)local_1b0,(Image *)this_03);
                iVar11 = FUN_053a113c(*(undefined8 *)(lVar13 + 0x90),*(undefined8 *)(lVar13 + 0x98))
                ;
                pTVar21 = (TRect *)std::
                                   vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                                   ::front(this_01);
                if (0 < iVar11) {
                  iVar28 = 0;
                  pTVar29 = pTVar21;
                  do {
                    pIVar22 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(lVar13 + 0xe0));
                    if (pIVar22 != (Image *)0x0) {
                      pIVar22 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(lVar13 + 0xe0));
                      Graphics::DrawImage((Graphics *)local_1b0,pIVar22,iVar28,
                                          *(int *)(pTVar29 + 0x14) - iVar4,pTVar29);
                    }
                    *(int *)(pTVar29 + 0x10) = *(int *)(pTVar29 + 0x10) + -1;
                    *(int *)(pTVar29 + 0x14) = iVar4;
                    Insets::Insets((Insets *)&local_1c0,iVar28,0,*(int *)(pTVar29 + 8) + 2,iVar10);
                    *(ulong *)pTVar29 = local_1c0;
                    *(ulong *)(pTVar29 + 8) = CONCAT44(local_1b4,local_1b8);
                    pTVar23 = pTVar29 + 0x28;
                    iVar28 = iVar28 + *(int *)(pTVar29 + 8);
                    pTVar29 = pTVar23;
                  } while (pTVar23 != pTVar21 + ((ulong)(iVar11 - 1) + 1) * 0x28);
                }
                ResourceManager::RegisterResource
                          (*(ResourceManager **)(gSexyAppBase + 0x848),
                           (RtMixedPtrBase *)(lVar13 + 0xe0),(BaseResource *)this_03);
                Graphics::~Graphics((Graphics *)local_1b0);
              }
            }
            iVar10 = FUN_053a113c(*(undefined8 *)(lVar13 + 0x90),*(undefined8 *)(lVar13 + 0x98));
            lVar18 = std::
                     vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                     front(this_01);
            if (iVar10 < 1) {
              iVar28 = 0;
              iVar11 = 0;
            }
            else {
              dVar35 = dVar33 / dVar34;
              iVar28 = 0;
              iVar11 = 0;
              lVar32 = lVar18;
              do {
                lVar3 = lVar32 + 0x28;
                local_1c0 = local_1c0 & 0xffffffff00000000;
                local_1b0[0]._0_4_ =
                     ((int)((double)(*(int *)(lVar32 + 0x10) + *(int *)(lVar32 + 8)) * dVar35) -
                     (int)(dVar35 * (double)*(int *)(lVar32 + 0x10))) + -1;
                piVar19 = eastl::max_alt<int>((int *)&local_1c0,(int *)local_1b0);
                iVar4 = *piVar19;
                local_1b0[0] = CONCAT44(local_1b0[0]._4_4_,
                                        ((int)(dVar35 * (double)(*(int *)(lVar32 + 0x14) +
                                                                *(int *)(lVar32 + 0xc))) -
                                        (int)(dVar35 * (double)*(int *)(lVar32 + 0x14))) + -1);
                piVar19 = eastl::max_alt<int>((int *)&local_1c0,(int *)local_1b0);
                Insets::Insets((Insets *)&local_1c0,iVar11,0,iVar4,*piVar19);
                if (iVar28 < local_1b4) {
                  iVar28 = local_1b4;
                }
                puVar20 = (ushort *)
                          FUN_053a1128(*(undefined8 *)(lVar13 + 0xa8),(long)*(int *)(lVar32 + 0x24))
                ;
                std::pair<wchar_t_const,Sexy::TRect<int>>::
                pair<unsigned_short&,Sexy::TRect<int>&,void>
                          ((pair<wchar_t_const,Sexy::TRect<int>> *)local_1b0,puVar20,
                           (TRect *)&local_1c0);
                std::
                map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                ::insert<std::pair<wchar_t_const,Sexy::TRect<int>>,void>
                          ((map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                            *)(lVar17 + 0x98),(pair *)local_1b0);
                iVar11 = iVar11 + local_1b8;
                lVar32 = lVar3;
              } while (lVar3 != lVar18 + ((ulong)(iVar10 - 1) + 1) * 0x28);
            }
            ResourceManager::RegisterResource
                      (*(ResourceManager **)(gSexyAppBase + 0x848),(RtMixedPtrBase *)(lVar17 + 0x80)
                       ,(BaseResource *)this_02);
            (**(code **)(*(long *)this_02 + 200))(this_02,iVar11,iVar28);
            Graphics::Graphics((Graphics *)local_1b0,(Image *)this_02);
            iVar10 = FUN_053a113c(*(undefined8 *)(lVar13 + 0x90),*(undefined8 *)(lVar13 + 0x98));
            pTVar21 = (TRect *)std::
                               vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                               ::front(this_01);
            if (0 < iVar10) {
              pTVar29 = pTVar21 + ((ulong)(iVar10 - 1) + 1) * 0x28;
              do {
                pIVar22 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(lVar13 + 0xe0));
                if (pIVar22 != (Image *)0x0) {
                  puVar20 = (ushort *)
                            FUN_053a1128(*(undefined8 *)(lVar13 + 0xa8),
                                         (long)*(int *)(pTVar21 + 0x24));
                  pIVar22 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(lVar13 + 0xe0));
                  local_1c0 = CONCAT44(local_1c0._4_4_,(uint)*puVar20);
                  pTVar23 = (TRect *)std::
                                     map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                                     ::operator[]((
                                                  map<wchar_t,Sexy::TRect<int>,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,Sexy::TRect<int>>>>
                                                  *)(lVar17 + 0x98),(wchar_t *)&local_1c0);
                  Graphics::DrawImage((Graphics *)local_1b0,pIVar22,pTVar23,pTVar21);
                }
                pTVar21 = pTVar21 + 0x28;
              } while (pTVar21 != pTVar29);
            }
            if (this[0x70] != (ImageFont)0x0) {
              uVar31 = *(int *)(this_02 + 0x38) * *(int *)(this_02 + 0x3c);
              puVar24 = (ulong *)(**(code **)(*(long *)this_02 + 0xd0))(this_02,0,0,0,0);
              if (0 < (int)uVar31) {
                uVar1 = (uVar31 - 4 >> 2) + 1;
                uVar25 = uVar1 * 4;
                if (uVar31 - 1 < 3) {
                  uVar25 = 0;
                }
                else {
                  uVar26 = 0;
                  puVar27 = puVar24;
                  do {
                    uVar26 = uVar26 + 1;
                    puVar27[1] = puVar27[1] | 0xffffff00ffffff;
                    *puVar27 = *puVar27 | 0xffffff00ffffff;
                    puVar27 = puVar27 + 2;
                  } while (uVar26 < uVar1);
                  puVar24 = (ulong *)((long)puVar24 + (ulong)uVar25 * 4);
                  if (uVar31 == uVar25) goto LAB_053ae894;
                }
                *(uint *)puVar24 = (uint)*puVar24 | 0xffffff;
                if (((int)(uVar25 + 1) < (int)uVar31) &&
                   (*(uint *)((long)puVar24 + 4) = *(uint *)((long)puVar24 + 4) | 0xffffff,
                   (int)(uVar25 + 2) < (int)uVar31)) {
                  *(uint *)(puVar24 + 1) = (uint)puVar24[1] | 0xffffff;
                }
              }
            }
LAB_053ae894:
            FUN_053a16c4(this_02 + 0x18);
            (**(code **)(*(long *)this_02 + 0x140))(this_02);
            Graphics::~Graphics((Graphics *)local_1b0);
          }
          dVar34 = 1.0 / dVar34;
          dVar35 = dVar33 * (double)*(int *)(lVar13 + 0x11c) * dVar34;
          if (dVar35 < 0.0) {
            dVar35 = dVar35 - 0.501;
          }
          else {
            dVar35 = dVar35 + 0.501;
          }
          if (*(int *)(this + 0x18) < (int)dVar35) {
            *(int *)(this + 0x18) = (int)dVar35;
          }
          iVar10 = *(int *)(lVar13 + 0x124);
          if (iVar10 == 0) {
            iVar10 = *(int *)(lVar13 + 0x128);
          }
          dVar35 = dVar33 * (double)iVar10 * dVar34;
          if (dVar35 < 0.0) {
            dVar35 = dVar35 - 0.501;
          }
          else {
            dVar35 = dVar35 + 0.501;
          }
          if (*(int *)(this + 0x20) < (int)dVar35) {
            *(int *)(this + 0x20) = (int)dVar35;
          }
          dVar35 = dVar33 * (double)*(int *)(lVar13 + 0x120) * dVar34;
          if (dVar35 < 0.0) {
            dVar35 = dVar35 - 0.501;
          }
          else {
            dVar35 = dVar35 + 0.501;
          }
          if ((bVar7) || ((int)dVar35 < *(int *)(this + 0x1c))) {
            *(int *)(this + 0x1c) = (int)dVar35;
          }
          dVar34 = dVar33 * (double)*(int *)(lVar13 + 300) * dVar34;
          if (dVar34 < 0.0) {
            dVar34 = dVar34 - 0.501;
          }
          else {
            dVar34 = dVar34 + 0.501;
          }
          if ((bVar7) || (*(int *)(this + 0x24) < (int)dVar34)) {
            *(int *)(this + 0x24) = (int)dVar34;
            bVar7 = false;
            goto LAB_053ae3ac;
          }
        }
        bVar7 = false;
      }
LAB_053ae3ac:
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_1c8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ImageFont::ImageFont(Sexy::SexyAppBase*, std::string const&, std::string const&) */

void __thiscall
Sexy::ImageFont::ImageFont(ImageFont *this,SexyAppBase *param_1,string *param_2,string *param_3)

{
  SexyAppBase SVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  FontData *this_00;
  Sexy *this_01;
  void *__s1;
  uchar *puVar5;
  ColourFit *this_02;
  bool bVar6;
  bool bVar7;
  ResStreamsManager *this_03;
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  AutoCrit aAStack_d0 [48];
  ImageFont *local_a0 [6];
  MD5Context aMStack_70 [88];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Font::Font((Font *)this);
  *(undefined ***)this = &PTR_GetClass_06a36f00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x58));
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  AutoCrit::AutoCrit(aAStack_d0,(CritSect *)(gSexyAppBase + 0x10c));
  local_a0[0] = this;
  std::set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>>::insert
            ((set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>> *)
             (gSexyAppBase + 0x4d8),local_a0);
  AutoCrit::~AutoCrit(aAStack_d0);
  this[0x71] = (ImageFont)0x0;
  *(undefined8 *)(this + 0x68) = 0x3ff0000000000000;
  this_00 = ::operator_new(0x128);
  FontData::FontData(this_00);
  *(FontData **)(this + 0x28) = this_00;
  FontData::Ref(this_00);
  thunk_FUN_05475e00(*(long *)(this + 0x28) + 0x120,param_3);
  std::operator+(param_2,".cfw2");
  this_01 = (Sexy *)FUN_031f5e7c(asStack_e8,"cached\\",asStack_f0);
  GetAppDataFolder(this_01);
  std::operator+((string *)local_a0,asStack_e8);
  std::string::~string((string *)local_a0);
  Buffer::Buffer((Buffer *)aAStack_d0);
  bVar6 = SUB81(aAStack_d0,0);
  cVar2 = SexyAppBase::ReadBufferFromFile((string *)param_1,(Buffer *)asStack_f0,bVar6);
  bVar7 = SUB81((string *)local_a0,0);
  if ((((cVar2 != '\0') && (iVar4 = Buffer::GetDataLen((Buffer *)aAStack_d0), 0xf < iVar4)) ||
      ((cVar2 = SexyAppBase::ReadBufferFromFile((string *)param_1,(Buffer *)asStack_e8,bVar6),
       cVar2 != '\0' && (iVar4 = Buffer::GetDataLen((Buffer *)aAStack_d0), 0xf < iVar4)))) ||
     ((cVar2 = SexyAppBase::ReadBufferFromFile((string *)param_1,(Buffer *)asStack_e0,bVar6),
      cVar2 != '\0' && (iVar4 = Buffer::GetDataLen((Buffer *)aAStack_d0), 0xf < iVar4)))) {
    this_03 = *(ResStreamsManager **)(param_1 + 0x908);
    if (this_03 != (ResStreamsManager *)0x0) {
      std::string::string((string *)local_a0,"dynamic.rsb");
      cVar2 = ResStreamsManager::IsInitialized(this_03,(string *)local_a0);
      std::string::~string((string *)local_a0);
      nop();
      if (cVar2 != '\0') {
        iVar4 = Buffer::GetDataPtr((Buffer *)aAStack_d0);
        Buffer::GetDataLen((Buffer *)aAStack_d0);
        SerializeReadEndian(this,iVar4 + 0x10);
        goto LAB_053aeeec;
      }
    }
    Buffer::Buffer((Buffer *)local_a0);
    cVar2 = SexyAppBase::ReadBufferFromFile((string *)param_1,(Buffer *)param_2,bVar7);
    if (cVar2 != '\0') {
      MD5Init(aMStack_70);
      puVar5 = (uchar *)Buffer::GetDataPtr((Buffer *)local_a0);
      uVar3 = Buffer::GetDataLen((Buffer *)local_a0);
      MD5Update(aMStack_70,puVar5,uVar3);
      MD5Final((uchar *)&local_18,aMStack_70);
      __s1 = (void *)Buffer::GetDataPtr((Buffer *)aAStack_d0);
      iVar4 = memcmp(__s1,&local_18,0x10);
      if (iVar4 == 0) {
        iVar4 = Buffer::GetDataPtr((Buffer *)aAStack_d0);
        Buffer::GetDataLen((Buffer *)aAStack_d0);
        SerializeRead(this,iVar4 + 0x10);
        Buffer::~Buffer((Buffer *)local_a0);
        goto LAB_053aeeec;
      }
    }
    Buffer::~Buffer((Buffer *)local_a0);
  }
  FontData::Load(*(FontData **)(this + 0x28),param_1,param_2);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(*(long *)(this + 0x28) + 0x98);
  this[0x50] = (ImageFont)0x0;
  GenerateActiveFontLayers(this);
  SVar1 = param_1[0x6da];
  this[0x51] = (ImageFont)0x1;
  this[0x70] = (ImageFont)0x0;
  if (SVar1 != (SexyAppBase)0x0) {
    Buffer::Buffer((Buffer *)local_a0);
    cVar2 = SexyAppBase::ReadBufferFromFile((string *)param_1,(Buffer *)param_2,bVar7);
    if (cVar2 != '\0') {
      MD5Init(aMStack_70);
      puVar5 = (uchar *)Buffer::GetDataPtr((Buffer *)local_a0);
      uVar3 = Buffer::GetDataLen((Buffer *)local_a0);
      MD5Update(aMStack_70,puVar5,uVar3);
      MD5Final((uchar *)&local_18,aMStack_70);
      GetFileDir(asStack_e0,false);
      DFinder::createDirectory(asStack_d8);
      std::string::~string(asStack_d8);
      iVar4 = SerializeWrite(this,(void *)0x0,0);
      this_02 = operator_new__((long)(iVar4 + 0x10));
      *(undefined8 *)this_02 = local_18;
      *(undefined8 *)(this_02 + 8) = uStack_10;
      SerializeWrite(this,this_02 + 0x10,iVar4);
      SexyAppBase::WriteBytesToFile((string *)param_1,asStack_e0,(ulong)this_02);
      EATextSquish::ColourFit::~ColourFit(this_02);
    }
    Buffer::~Buffer((Buffer *)local_a0);
  }
LAB_053aeeec:
  Buffer::~Buffer((Buffer *)aAStack_d0);
  std::string::~string(asStack_e0);
  std::string::~string(asStack_e8);
  std::string::~string(asStack_f0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

