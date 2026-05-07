// Class: Sexy::FontData


/* Sexy::FontData::Ref() */

void __thiscall Sexy::FontData::Ref(FontData *this)

{
  *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
  return;
}


/* Sexy::FontData::DeRef() */

void __thiscall Sexy::FontData::DeRef(FontData *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x8c);
  *(int *)(this + 0x8c) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(*(long *)this + 8))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FontData::Error(std::wstring const&) */

void Sexy::FontData::Error(wstring *param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0342e660(auStack_28,param_1 + 0x118);
  lVar1 = FUN_054765d0(param_1 + 0x50);
  if (lVar1 != 0) {
    StrFormat(L"%d:\r\n\r\n",awStack_20,(ulong)*(uint *)(param_1 + 0x48));
    std::operator+(L" on Line ",awStack_20);
    std::operator+(awStack_18,param_1 + 0x50);
    thunk_FUN_05477668(auStack_28,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  (**(code **)(**(long **)(param_1 + 0x90) + 0x148))(*(long **)(param_1 + 0x90),auStack_28);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FontData::Load(Sexy::SexyAppBase*, std::string const&) */

void __thiscall Sexy::FontData::Load(FontData *this,SexyAppBase *param_1,string *param_2)

{
  FontData FVar1;
  long lVar2;
  FontData FVar3;
  string *extraout_x1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar2 = ___stack_chk_guard;
  FVar1 = this[0x88];
  local_8 = ___stack_chk_guard;
  if (FVar1 == (FontData)0x0) {
    *(SexyAppBase **)(this + 0x90) = param_1;
    FUN_054772c4(this + 0x50,&DAT_056f11a8,lVar2,0);
    UTF8StringToWString((Sexy *)param_2,extraout_x1);
    std::operator+(L"Font Descriptor Error in ",awStack_20);
    std::operator+(awStack_18,L"\r\n");
    FUN_054766c8(this + 0x118,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    thunk_FUN_05475e00(this + 0x110,param_2);
    FVar3 = (FontData)(**(code **)(*(long *)this + 0x68))(this,param_2);
    this[0x88] = FVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(FVar1 == (FontData)0x0);
}


/* Sexy::FontData::FontData() */

void __thiscall Sexy::FontData::FontData(FontData *this)

{
  DescParser::DescParser((DescParser *)this);
  *(undefined ***)this = &PTR__FontData_06a36e50;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xa0));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0xd0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe0));
  Set8BytesTo0(this + 0x110);
  FUN_05476574(this + 0x118);
  Set8BytesTo0(this + 0x120);
  this[0x88] = (FontData)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FontData::GetColorFromDataElement(Sexy::DataElement*, Sexy::Color&) */

void __thiscall
Sexy::FontData::GetColorFromDataElement(FontData *this,DataElement *param_1,Color *param_2)

{
  char cVar1;
  DataElement DVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  uint local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  DVar2 = param_1[8];
  local_8 = ___stack_chk_guard;
  if ((byte)DVar2 == 0) {
    local_30 = (uint)(byte)DVar2;
    DVar2 = (DataElement)StringToInt((wstring *)(param_1 + 0x10),(int *)&local_30);
    if (DVar2 != (DataElement)0x0) {
      Color::Color((Color *)&local_20,local_30);
      *(undefined8 *)param_2 = local_20;
      *(undefined8 *)(param_2 + 8) = local_18;
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    cVar1 = DescParser::DataToDoubleVector((DescParser *)this,param_1,(vector *)&local_20);
    if ((cVar1 == '\0') && (lVar7 = FUN_053a115c(local_20,local_18), lVar7 == 4)) {
      DVar2 = (DataElement)0x0;
    }
    else {
      pdVar3 = (double *)FUN_053a1168(local_20,0);
      pdVar4 = (double *)FUN_053a1168(local_20,1);
      pdVar5 = (double *)FUN_053a1168(local_20,2);
      pdVar6 = (double *)FUN_053a1168(local_20,3);
      Insets::Insets((Insets *)&local_30,(int)(*pdVar3 * 255.0),(int)(*pdVar4 * 255.0),
                     (int)(*pdVar5 * 255.0),(int)(*pdVar6 * 255.0));
      *(ulong *)param_2 = CONCAT44(uStack_2c,local_30);
      *(undefined8 *)(param_2 + 8) = uStack_28;
    }
    std::vector<double,std::allocator<double>>::~vector
              ((vector<double,std::allocator<double>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FontData::~FontData() */

void __thiscall Sexy::FontData::~FontData(FontData *this)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__FontData_06a36e50;
  local_18 = std::
             map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             ::begin((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                      *)(this + 0x58));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x58));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    uVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    FUN_05477b24((rbtree_iterator *)&local_10,uVar2);
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(long **)(lVar3 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + 8) + 8))();
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    FUN_05476c50((rbtree_iterator *)&local_10);
  }
  std::string::~string((string *)(this + 0x120));
  FUN_05476c50(this + 0x118);
  std::string::~string((string *)(this + 0x110));
  std::
  map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
  ::~map((map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
          *)(this + 0xe0));
  std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::~list
            ((list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>> *)(this + 0xd0));
  std::map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>::
  ~map((map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>> *)
       (this + 0xa0));
  DescParser::~DescParser((DescParser *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::FontData::~FontData() */

void __thiscall Sexy::FontData::~FontData(FontData *this)

{
  ~FontData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FontData::DataToLayer(Sexy::DataElement*, Sexy::FontLayer**) */

void __thiscall Sexy::FontData::DataToLayer(FontData *this,DataElement *param_1,FontLayer **param_2)

{
  DataElement DVar1;
  char cVar2;
  long lVar3;
  FontLayer **ppFVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  DVar1 = param_1[8];
  local_8 = ___stack_chk_guard;
  *param_2 = (FontLayer *)0x0;
  if (DVar1 == (DataElement)0x0) {
    ppFVar4 = param_2;
    StringToUpper((Sexy *)(param_1 + 0x10),(wstring *)param_1);
    WStringToString((Sexy *)&local_10,(wstring *)0x0,(bool *)ppFVar4);
    FUN_05476c50((Sexy *)&local_10);
    local_18 = std::
               map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
               ::find((map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
                       *)(this + 0xe0),asStack_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0xe0));
    cVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar2 != '\0') {
      pcVar6 = *(code **)(*(long *)this + 0x50);
      FUN_05478178((Sexy *)&local_10,L"Undefined Layer",auStack_28);
      (*pcVar6)(this,(Sexy *)&local_10);
      FUN_05476c50((Sexy *)&local_10);
      nop();
    }
    else {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *param_2 = *(FontLayer **)(lVar3 + 8);
    }
    bVar5 = cVar2 == '\0';
    std::string::~string(asStack_20);
  }
  else {
    bVar5 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FontData::HandleCommand(Sexy::ListDataElement const&) */

void __thiscall Sexy::FontData::HandleCommand(FontData *this,ListDataElement *param_1)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *pmVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>> *plVar2;
  vector<std::string,std::allocator<std::string>> *pvVar3;
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  *this_01;
  int iVar4;
  wchar_t wVar5;
  undefined1 uVar6;
  bool bVar7;
  FontLayer *pFVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  wchar_t *pwVar14;
  long lVar15;
  undefined8 *puVar16;
  ListDataElement *pLVar17;
  int *piVar18;
  SingleDataElement *pSVar19;
  uint *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  wchar_t *pwVar24;
  Image *pIVar25;
  MemoryImage *pMVar26;
  long lVar27;
  InfoClass *pIVar28;
  undefined4 *puVar29;
  int *piVar30;
  int *piVar31;
  int *piVar32;
  void *__base;
  size_t __nmemb;
  undefined2 *puVar33;
  wstring *pwVar34;
  wstring *pwVar35;
  uint extraout_w1;
  uint extraout_w1_00;
  bool *pbVar36;
  FontLayer **ppFVar37;
  FontLayer *pFVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  code *pcVar41;
  ResourceManager *this_02;
  uint uVar42;
  undefined1 auVar43 [16];
  int local_1a8;
  bool local_1a0 [8];
  undefined1 auStack_198 [8];
  FontLayer *local_190;
  ListDataElement *local_188;
  undefined8 local_180;
  int local_178;
  int local_174;
  SingleDataElement *local_170;
  undefined8 local_168;
  ListDataElement *local_158;
  undefined8 local_150;
  FontLayer *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar36 = ___stack_chk_guard;
  plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),0);
  FUN_05477b24(auStack_198,*plVar13 + 0x10);
  pwVar14 = (wchar_t *)FUN_054766ec(auStack_198);
  iVar11 = wcscasecmp_prime(pwVar14,L"Define");
  if (iVar11 == 0) {
    uVar40 = *(undefined8 *)(param_1 + 0x10);
    lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
    if (lVar15 != 3) goto LAB_053abcb0;
    plVar13 = (long *)FUN_053a1170(uVar40,1);
    if (*(char *)(*plVar13 + 8) != '\0') goto LAB_053abddc;
    StringToUpper((Sexy *)(*plVar13 + 0x10),(wstring *)0x0);
    cVar9 = DescParser::IsImmediate((DescParser *)this,(wstring *)&local_180);
    if (cVar9 == '\0') {
      pmVar1 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                *)(this + 0x58);
      local_170 = (SingleDataElement *)
                  std::
                  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                  ::find(pmVar1,(wstring *)&local_180);
      local_140 = (FontLayer *)
                  std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)pmVar1);
      bVar10 = eastl::operator!=((rbtree_iterator *)&local_170,(rbtree_iterator *)&local_140);
      if (bVar10) {
        lVar15 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_170);
        if (*(long **)(lVar15 + 8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar15 + 8) + 8))();
        }
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::erase_abi_cxx11_(pmVar1,local_170);
      }
      puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
      plVar13 = (long *)*puVar16;
      if ((char)plVar13[1] == '\0') {
        plVar22 = (long *)(**(code **)(*(long *)this + 0x58))(this,plVar13 + 2);
        if (plVar22 == (long *)0x0) {
          lVar15 = *plVar13;
        }
        else {
          lVar15 = *plVar22;
          plVar13 = plVar22;
        }
        local_158 = (ListDataElement *)(**(code **)(lVar15 + 0x10))(plVar13);
        std::pair<std::wstring_const,Sexy::DataElement*>::
        pair<std::wstring&,Sexy::DataElement*,void>
                  ((pair<std::wstring_const,Sexy::DataElement*> *)&local_140,(wstring *)&local_180,
                   (DataElement **)&local_158);
      }
      else {
        pLVar17 = ::operator_new(0x28);
        ListDataElement::ListDataElement(pLVar17);
        local_158 = pLVar17;
        puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
        cVar9 = DescParser::GetValues((DescParser *)this,(ListDataElement *)*puVar16,pLVar17);
        if (cVar9 == '\0') {
          if (local_158 != (ListDataElement *)0x0) {
            (**(code **)(*(long *)local_158 + 8))();
          }
          FUN_05476c50((wstring *)&local_180);
          uVar39 = 0;
          goto LAB_053abcf4;
        }
        std::pair<std::wstring_const,Sexy::DataElement*>::
        pair<std::wstring&,Sexy::DataElement*,void>
                  ((pair<std::wstring_const,Sexy::DataElement*> *)&local_140,(wstring *)&local_180,
                   (DataElement **)&local_158);
      }
      bVar10 = false;
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::insert<std::pair<std::wstring_const,Sexy::DataElement*>,void>(pmVar1,(pair *)&local_140);
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)&local_140);
    }
    else {
      bVar10 = true;
    }
    FUN_05476c50((wstring *)&local_180);
joined_r0x053ad2fc:
    if (!bVar10) {
LAB_053abdb4:
      uVar39 = 1;
      goto LAB_053abcf4;
    }
  }
  else {
    iVar11 = wcscasecmp_prime(pwVar14,L"CreateHorzSpanRectList");
    if (iVar11 == 0) {
      lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      if (lVar15 != 4) goto LAB_053abcb0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_158);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140);
      uVar40 = *(undefined8 *)(param_1 + 0x10);
      plVar13 = (long *)FUN_053a1170(uVar40,1);
      if (*(char *)(*plVar13 + 8) == '\0') {
        puVar16 = (undefined8 *)FUN_053a1170(uVar40,2);
        cVar9 = DescParser::DataToIntVector
                          ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_158);
        if ((cVar9 == '\0') || (lVar15 = FUN_053a1184(local_158,local_150), lVar15 != 4))
        goto LAB_053abd9c;
        puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),3);
        cVar9 = DescParser::DataToIntVector
                          ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_140);
        if (cVar9 == '\0') goto LAB_053abd9c;
        auVar43 = FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
        local_1a8 = 0;
        StringToUpper((Sexy *)(*auVar43._0_8_ + 0x10),auVar43._8_8_);
        pLVar17 = ::operator_new(0x28);
        ListDataElement::ListDataElement(pLVar17);
        uVar42 = 0;
        local_188 = pLVar17;
        while( true ) {
          uVar23 = (ulong)uVar42;
          uVar21 = FUN_053a1184(local_140,local_138);
          if (uVar21 <= uVar23) break;
          uVar42 = uVar42 + 1;
          pLVar17 = ::operator_new(0x28);
          ListDataElement::ListDataElement(pLVar17);
          this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                    (pLVar17 + 0x10);
          local_170 = (SingleDataElement *)pLVar17;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                     (local_188 + 0x10),(DataElement **)&local_170);
          FUN_05476574((wstring *)&local_180);
          piVar18 = (int *)FUN_053a1190(local_158,0);
          StrFormat(L"%d",(pair<std::wstring_const,Sexy::DataElement*> *)&local_170,
                    (ulong)(uint)(local_1a8 + *piVar18));
          FUN_054766c8((wstring *)&local_180,
                       (pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
          FUN_05476c50((pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
          pSVar19 = ::operator_new(0x20);
          SingleDataElement::SingleDataElement(pSVar19,(wstring *)&local_180);
          local_170 = pSVar19;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                    (this_00,(DataElement **)&local_170);
          puVar20 = (uint *)FUN_053a1190(local_158,1);
          StrFormat(L"%d",(pair<std::wstring_const,Sexy::DataElement*> *)&local_170,(ulong)*puVar20)
          ;
          FUN_054766c8((wstring *)&local_180,
                       (pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
          FUN_05476c50((pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
          pSVar19 = ::operator_new(0x20);
          SingleDataElement::SingleDataElement(pSVar19,(wstring *)&local_180);
          local_170 = pSVar19;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                    (this_00,(DataElement **)&local_170);
          puVar20 = (uint *)FUN_053a1190(local_140,uVar23);
          StrFormat(L"%d",(pair<std::wstring_const,Sexy::DataElement*> *)&local_170,(ulong)*puVar20)
          ;
          FUN_054766c8((wstring *)&local_180,
                       (pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
          FUN_05476c50((pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
          pSVar19 = ::operator_new(0x20);
          SingleDataElement::SingleDataElement(pSVar19,(wstring *)&local_180);
          local_170 = pSVar19;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                    (this_00,(DataElement **)&local_170);
          puVar20 = (uint *)FUN_053a1190(local_158,3);
          StrFormat(L"%d",(pair<std::wstring_const,Sexy::DataElement*> *)&local_170,(ulong)*puVar20)
          ;
          FUN_054766c8((wstring *)&local_180,
                       (pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
          FUN_05476c50((pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
          pSVar19 = ::operator_new(0x20);
          SingleDataElement::SingleDataElement(pSVar19,(wstring *)&local_180);
          local_170 = pSVar19;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                    (this_00,(DataElement **)&local_170);
          piVar18 = (int *)FUN_053a1190(local_140,uVar23);
          local_1a8 = local_1a8 + *piVar18;
          FUN_05476c50((wstring *)&local_180);
        }
        pmVar1 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                  *)(this + 0x58);
        local_180 = (FontLayer *)
                    std::
                    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                    ::find(pmVar1,(wstring *)&local_190);
        local_170 = (SingleDataElement *)
                    std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)pmVar1);
        bVar10 = eastl::operator!=((rbtree_iterator *)&local_180,(rbtree_iterator *)&local_170);
        if (bVar10) {
          lVar15 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_180);
          if (*(long **)(lVar15 + 8) != (long *)0x0) {
            (**(code **)(**(long **)(lVar15 + 8) + 8))();
          }
          std::
          map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
          ::erase_abi_cxx11_(pmVar1,local_180);
        }
        bVar10 = false;
        std::pair<std::wstring_const,Sexy::DataElement*>::
        pair<std::wstring&,Sexy::DataElement*,void>
                  ((pair<std::wstring_const,Sexy::DataElement*> *)&local_170,(wstring *)&local_190,
                   (DataElement **)&local_188);
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::insert<std::pair<std::wstring_const,Sexy::DataElement*>,void>(pmVar1,(pair *)&local_170);
        std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                  ((pair<std::wstring_const,Sexy::DataElement*> *)&local_170);
        FUN_05476c50((wstring *)&local_190);
      }
      else {
LAB_053abd9c:
        bVar10 = true;
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_140);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_158);
      goto joined_r0x053ad2fc;
    }
    iVar11 = wcscasecmp_prime(pwVar14,L"SetDefaultPointSize");
    if (iVar11 == 0) {
      uVar40 = *(undefined8 *)(param_1 + 0x10);
      lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
      if (lVar15 == 2) {
        plVar13 = (long *)FUN_053a1170(uVar40,1);
        if ((*(char *)(*plVar13 + 8) == '\0') &&
           (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_140), cVar9 != '\0')) {
          uVar39 = 1;
          *(undefined4 *)(this + 0x98) = local_140._0_4_;
          goto LAB_053abcf4;
        }
        goto LAB_053abddc;
      }
      goto LAB_053abcb0;
    }
    iVar11 = wcscasecmp_prime(pwVar14,L"SetCharMap");
    if (iVar11 == 0) {
      lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      if (lVar15 != 3) goto LAB_053abcb0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_158);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140);
      puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
      cVar9 = DescParser::DataToStringVector
                        ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_158);
      if (cVar9 == '\0') {
LAB_053ac33c:
        bVar7 = false;
        bVar10 = true;
      }
      else {
        puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
        cVar9 = DescParser::DataToStringVector
                          ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_140);
        pLVar17 = local_158;
        if (cVar9 == '\0') goto LAB_053ac33c;
        uVar21 = FUN_053a1198(local_158,local_150);
        uVar23 = FUN_053a1198(local_140,local_138);
        bVar10 = false;
        if (uVar21 == uVar23) {
          uVar21 = 0;
          while (uVar21 < uVar23) {
            uVar40 = FUN_053a11a4(pLVar17,uVar21);
            lVar15 = FUN_054765d0();
            if (lVar15 == 1) {
              FUN_053a11a4(local_140,uVar21);
              lVar15 = FUN_054765d0();
              if (lVar15 != 1) goto LAB_053ac754;
              pwVar14 = (wchar_t *)FUN_05476f5c(uVar40,0);
              uVar40 = FUN_053a11a4(local_140,uVar21);
              pwVar24 = (wchar_t *)FUN_05476f5c(uVar40,0);
              std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                        ((pair<wchar_t_const,wchar_t> *)&local_170,pwVar14,pwVar24);
              std::
              map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
              ::insert<std::pair<wchar_t_const,wchar_t>,void>
                        ((map<wchar_t,wchar_t,std::less<wchar_t>,std::allocator<std::pair<wchar_t_const,wchar_t>>>
                          *)(this + 0xa0),(pair *)&local_170);
              pLVar17 = local_158;
              uVar23 = FUN_053a1198(local_158,local_150);
              uVar21 = (ulong)((int)uVar21 + 1);
            }
            else {
LAB_053ac754:
              bVar10 = true;
              uVar21 = (ulong)((int)uVar21 + 1);
            }
          }
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
      }
LAB_053ac344:
      std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                ((vector<std::wstring,std::allocator<std::wstring>> *)&local_140);
      std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                ((vector<std::wstring,std::allocator<std::wstring>> *)&local_158);
LAB_053ac354:
      if (bVar10) goto LAB_053abddc;
      if (bVar7) {
        pwVar14 = L"List Size Mismatch";
        pcVar41 = *(code **)(*(long *)this + 0x50);
LAB_053abcd4:
        uVar39 = 0;
        FUN_05478178(&local_140,pwVar14,&local_158);
        (*pcVar41)(this,&local_140);
        FUN_05476c50(&local_140);
        nop();
        goto LAB_053abcf4;
      }
      goto LAB_053abdb4;
    }
    iVar11 = wcscasecmp_prime(pwVar14,L"CreateLayer");
    if (iVar11 == 0) {
      uVar40 = *(undefined8 *)(param_1 + 0x10);
      lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
      if (lVar15 != 2) goto LAB_053abcb0;
      plVar13 = (long *)FUN_053a1170(uVar40,1);
      if (*(char *)(*plVar13 + 8) == '\0') {
        plVar2 = (list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>> *)(this + 0xd0);
        StringToUpper((Sexy *)(*plVar13 + 0x10),(wstring *)0x0);
        WStringToString((Sexy *)&local_140,(wstring *)0x0,pbVar36);
        FUN_05476c50((Sexy *)&local_140);
        FontLayer::FontLayer((FontLayer *)&local_140,this);
        std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::push_back
                  (plVar2,(FontLayer *)&local_140);
        FontLayer::~FontLayer((FontLayer *)&local_140);
        local_158 = (ListDataElement *)
                    std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                              ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                               plVar2);
        thunk_FUN_05475e00(local_158 + 0x38,(string *)&local_170);
        pLVar17 = local_158;
        iVar11 = std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::size(plVar2);
        *(int *)(pLVar17 + 0x130) = iVar11 + -1;
        std::pair<std::string_const,Sexy::FontLayer*>::pair<std::string&,Sexy::FontLayer*&,void>
                  ((pair<std::string_const,Sexy::FontLayer*> *)&local_140,(string *)&local_170,
                   (FontLayer **)&local_158);
        std::
        map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
        ::insert<std::pair<std::string_const,Sexy::FontLayer*>,void>
                  ((map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
                    *)(this + 0xe0),(pair *)&local_140);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_140);
        if ((extraout_w1 & 0xff) == 0) {
          pcVar41 = *(code **)(*(long *)this + 0x50);
          FUN_05478178((Sexy *)&local_140,L"Layer Already Exists",&local_180);
          (*pcVar41)(this,(Sexy *)&local_140);
          FUN_05476c50((Sexy *)&local_140);
          nop();
        }
        uVar39 = 1;
        std::string::~string((string *)&local_170);
        goto LAB_053abcf4;
      }
    }
    else {
      iVar11 = wcscasecmp_prime(pwVar14,L"CreateLayerFrom");
      if (iVar11 != 0) {
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerRequireTags");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140);
          puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_180);
          if (cVar9 == '\0') {
LAB_053ac6fc:
            bVar10 = true;
          }
          else {
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            cVar9 = DescParser::DataToStringVector
                              ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_140);
            if (cVar9 == '\0') goto LAB_053ac6fc;
            uVar42 = 0;
            while( true ) {
              pFVar8 = local_140;
              uVar23 = (ulong)uVar42;
              uVar21 = FUN_053a1198(local_140,local_138);
              if (uVar21 <= uVar23) break;
              uVar42 = uVar42 + 1;
              pvVar3 = (vector<std::string,std::allocator<std::string>> *)(local_180 + 0x40);
              pFVar38 = local_180;
              auVar43 = FUN_053a11a4(pFVar8,uVar23);
              StringToUpper(auVar43._0_8_,auVar43._8_8_);
              WStringToString((Sexy *)&local_170,(wstring *)0x0,(bool *)pFVar38);
              std::vector<std::string,std::allocator<std::string>>::push_back
                        (pvVar3,(string *)&local_158);
              std::string::~string((string *)&local_158);
              FUN_05476c50((Sexy *)&local_170);
            }
LAB_053ac8dc:
            bVar10 = false;
          }
          std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                    ((vector<std::wstring,std::allocator<std::wstring>> *)&local_140);
          if (bVar10) goto LAB_053abddc;
          goto LAB_053abdb4;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerExcludeTags");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 == 3) {
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140);
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
            cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_180);
            if (cVar9 != '\0') {
              puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
              cVar9 = DescParser::DataToStringVector
                                ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_140);
              if (cVar9 != '\0') {
                uVar42 = 0;
                while( true ) {
                  pFVar8 = local_140;
                  uVar23 = (ulong)uVar42;
                  uVar21 = FUN_053a1198(local_140,local_138);
                  if (uVar21 <= uVar23) break;
                  uVar42 = uVar42 + 1;
                  pvVar3 = (vector<std::string,std::allocator<std::string>> *)(local_180 + 0x58);
                  pFVar38 = local_180;
                  auVar43 = FUN_053a11a4(pFVar8,uVar23);
                  StringToUpper(auVar43._0_8_,auVar43._8_8_);
                  WStringToString((Sexy *)&local_170,(wstring *)0x0,(bool *)pFVar38);
                  std::vector<std::string,std::allocator<std::string>>::push_back
                            (pvVar3,(string *)&local_158);
                  std::string::~string((string *)&local_158);
                  FUN_05476c50((Sexy *)&local_170);
                }
                goto LAB_053ac8dc;
              }
            }
            goto LAB_053ac6fc;
          }
          goto LAB_053abcb0;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerPointRange");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 4) goto LAB_053abcb0;
          puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
          if (cVar9 != '\0') {
            uVar40 = *(undefined8 *)(param_1 + 0x10);
            plVar13 = (long *)FUN_053a1170(uVar40,2);
            lVar15 = *plVar13;
            if (((*(char *)(lVar15 + 8) == '\0') &&
                (plVar13 = (long *)FUN_053a1170(uVar40,3), *(char *)(*plVar13 + 8) == '\0')) &&
               (cVar9 = StringToInt((wstring *)(lVar15 + 0x10),(int *)&local_170), cVar9 != '\0')) {
              plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),3);
              cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_158);
              if (cVar9 != '\0') {
                uVar39 = 1;
                *(undefined4 *)(local_140 + 0x110) = local_170._0_4_;
                *(uint *)(local_140 + 0x114) = (uint)local_158;
                goto LAB_053abcf4;
              }
            }
          }
          goto LAB_053abddc;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetPointSize");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
          if (cVar9 != '\0') {
            plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            if ((*(char *)(*plVar13 + 8) == '\0') &&
               (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_158), cVar9 != '\0'))
            {
              uVar39 = 1;
              *(uint *)(local_140 + 0x118) = (uint)local_158;
              goto LAB_053abcf4;
            }
          }
          goto LAB_053abddc;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetHeight");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
          if (cVar9 != '\0') {
            plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            if ((*(char *)(*plVar13 + 8) == '\0') &&
               (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_158), cVar9 != '\0'))
            {
              uVar39 = 1;
              *(uint *)(local_140 + 0x124) = (uint)local_158;
              goto LAB_053abcf4;
            }
          }
          goto LAB_053abddc;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetImage");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          FUN_05476574();
          puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_190);
          if (cVar9 == '\0') {
LAB_053acc94:
            bVar10 = true;
          }
          else {
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            cVar9 = DescParser::DataToString
                              ((DescParser *)this,(DataElement *)*puVar16,(wstring *)&local_188);
            if (cVar9 == '\0') goto LAB_053acc94;
            Sexy::ToString((wstring *)&local_188);
            GetFileDir((string *)(this + 0x110),false);
            GetPathFrom((string *)&local_158,(string *)&local_140);
            std::string::~string((string *)&local_140);
            std::string::~string((string *)&local_158);
            uVar6 = *(undefined1 *)(gSexyAppBase + 0x6d8);
            *(undefined1 *)(gSexyAppBase + 0x6d8) = 0;
            local_1a0[0] = false;
            RtMixedPtr<Sexy::Image>::RtMixedPtr();
            cVar9 = FUN_0547419c(this + 0x120);
            if ((cVar9 == '\0') ||
               (pIVar28 = ResourceManager::GetResInfoForPathT<Sexy::Image>
                                    (*(ResourceManager **)(gSexyAppBase + 0x848),
                                     (string *)&local_180), pIVar28 == (InfoClass *)0x0)) {
LAB_053ace00:
              ResourceManager::GetImageOptions::GetImageOptions((GetImageOptions *)&local_140);
              local_140._0_2_ = (ushort)(byte)local_140._0_1_;
              this_02 = *(ResourceManager **)(gSexyAppBase + 0x848);
              FUN_031dcc6c((string *)&local_170,this + 0x120,(string *)&local_180);
              ResourceManager::GetImage
                        (this_02,(RtMixedPtr *)&local_158,(string *)&local_170,
                         (GetImageOptions *)&local_140,local_1a0);
              std::string::~string((string *)&local_170);
              ResourceManager::GetImageOptions::~GetImageOptions((GetImageOptions *)&local_140);
            }
            else {
              ResourceInfoTypes::FontRes::GetFont();
              RtMixedPtr<Sexy::Image>::operator=
                        ((RtMixedPtr<Sexy::Image> *)&local_158,(RtWeakPtrBase *)&local_140);
              RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_140)
              ;
              pIVar25 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)&local_158);
              if (pIVar25 == (Image *)0x0) goto LAB_053ace00;
            }
            thunk_FUN_05475e00(local_190 + 0xf8,(string *)&local_180);
            *(undefined1 *)(gSexyAppBase + 0x6d8) = uVar6;
            pIVar25 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)&local_158);
            if (pIVar25 == (Image *)0x0) {
              pcVar41 = *(code **)(*(long *)this + 0x50);
              FUN_05478178((string *)&local_140,L"Failed to Load Image",&local_170);
              (*pcVar41)(this,(string *)&local_140);
              FUN_05476c50((string *)&local_140);
              nop();
              RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)&local_158);
              std::string::~string((string *)&local_180);
              FUN_05476c50((wstring *)&local_188);
              uVar39 = 0;
              goto LAB_053abcf4;
            }
            pIVar25 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)&local_158);
            pMVar26 = RtObject::Cast<Sexy::MemoryImage>((RtObject *)pIVar25);
            if ((local_1a0[0] == false) && (lVar15 = *(long *)(pMVar26 + 0x80), lVar15 != 0)) {
              lVar27 = 0;
              local_190[0xf0] = (FontLayer)0x1;
              do {
                uVar42 = *(uint *)(lVar15 + lVar27);
                if (((uVar42 & 0xffffff) != 0xffffff) && (uVar42 != 0)) {
                  local_190[0xf0] = (FontLayer)0x0;
                  break;
                }
                lVar27 = lVar27 + 4;
              } while (lVar27 != 0x400);
            }
            bVar10 = false;
            RtMixedPtr<Sexy::Image>::operator=
                      ((RtMixedPtr<Sexy::Image> *)(local_190 + 0xe0),(RtMixedPtr *)&local_158);
            RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)&local_158);
            std::string::~string((string *)&local_180);
          }
          FUN_05476c50((wstring *)&local_188);
          if (bVar10) goto LAB_053abddc;
          goto LAB_053abdb4;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetDrawMode");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 == 3) {
            puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
            cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
            if (cVar9 != '\0') {
              plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
              if (((*(char *)(*plVar13 + 8) == '\0') &&
                  (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_158),
                  cVar9 != '\0')) && ((uint)local_158 < 2)) {
                uVar39 = 1;
                *(uint *)(local_140 + 0x100) = (uint)local_158;
                goto LAB_053abcf4;
              }
            }
            goto LAB_053abddc;
          }
          goto LAB_053abcb0;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetColorMult");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
          if (cVar9 == '\0') goto LAB_053abddc;
          puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
          cVar9 = GetColorFromDataElement(this,(DataElement *)*puVar16,(Color *)(local_140 + 0xc0));
          if (cVar9 != '\x01') goto LAB_053abddc;
          goto LAB_053abdb4;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetColorAdd");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
          if (cVar9 != '\0') {
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            cVar9 = GetColorFromDataElement
                              (this,(DataElement *)*puVar16,(Color *)(local_140 + 0xd0));
            if (cVar9 == '\x01') goto LAB_053abdb4;
          }
          goto LAB_053abddc;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetAscent");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
          if (cVar9 != '\0') {
            plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            if ((*(char *)(*plVar13 + 8) == '\0') &&
               (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_158), cVar9 != '\0'))
            {
              uVar39 = 1;
              *(uint *)(local_140 + 0x11c) = (uint)local_158;
              goto LAB_053abcf4;
            }
          }
          goto LAB_053abddc;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetAscentPadding");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
          if (cVar9 != '\0') {
            plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            if ((*(char *)(*plVar13 + 8) == '\0') &&
               (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_158), cVar9 != '\0'))
            {
              uVar39 = 1;
              *(uint *)(local_140 + 0x120) = (uint)local_158;
              goto LAB_053abcf4;
            }
          }
          goto LAB_053abddc;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetLineSpacingOffset");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
          if (cVar9 != '\0') {
            plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            if ((*(char *)(*plVar13 + 8) == '\0') &&
               (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_158), cVar9 != '\0'))
            {
              uVar39 = 1;
              *(uint *)(local_140 + 300) = (uint)local_158;
              goto LAB_053abcf4;
            }
          }
          goto LAB_053abddc;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetOffset");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 3) goto LAB_053abcb0;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140);
          puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_158);
          if (cVar9 == '\0') {
LAB_053ad2f0:
            bVar10 = true;
          }
          else {
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            cVar9 = DescParser::DataToIntVector
                              ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_140);
            pFVar8 = local_140;
            if ((cVar9 == '\0') ||
               (lVar15 = FUN_053a1184(local_140,local_138), pLVar17 = local_158, lVar15 != 2))
            goto LAB_053ad2f0;
            bVar10 = false;
            puVar29 = (undefined4 *)FUN_053a1190(pFVar8,0);
            *(undefined4 *)(pLVar17 + 0x104) = *puVar29;
            puVar29 = (undefined4 *)FUN_053a1190(pFVar8,1);
            *(undefined4 *)(pLVar17 + 0x108) = *puVar29;
          }
LAB_053ad2f4:
          std::vector<int,std::allocator<int>>::~vector
                    ((vector<int,std::allocator<int>> *)&local_140);
          goto joined_r0x053ad2fc;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetCharWidths");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 4) goto LAB_053abcb0;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_158);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140);
          puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_170);
          if (cVar9 == '\0') {
LAB_053ad370:
            bVar7 = false;
            bVar10 = true;
          }
          else {
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            cVar9 = DescParser::DataToStringVector
                              ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_158);
            if (cVar9 == '\0') goto LAB_053ad370;
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),3);
            cVar9 = DescParser::DataToIntVector
                              ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_140);
            if (cVar9 == '\0') goto LAB_053ad370;
            lVar15 = FUN_053a1198(local_158,local_150);
            lVar27 = FUN_053a1184(local_140,local_138);
            if (lVar15 == lVar27) {
              bVar10 = false;
              for (uVar21 = 0; pLVar17 = local_158, uVar23 = FUN_053a1198(local_158,local_150),
                  uVar21 < uVar23; uVar21 = (ulong)((int)uVar21 + 1)) {
                uVar40 = FUN_053a11a4(pLVar17,uVar21);
                lVar15 = FUN_054765d0();
                pSVar19 = local_170;
                if (lVar15 == 1) {
                  pwVar14 = (wchar_t *)FUN_05476f5c(uVar40,0);
                  lVar15 = FontLayer::GetCharData((FontLayer *)pSVar19,*pwVar14);
                  puVar29 = (undefined4 *)FUN_053a1190(local_140,uVar21);
                  *(undefined4 *)(lVar15 + 0x1c) = *puVar29;
                }
                else {
                  bVar10 = true;
                }
              }
LAB_053ad648:
              bVar7 = false;
            }
            else {
LAB_053ad474:
              bVar7 = true;
              bVar10 = false;
            }
          }
          std::vector<int,std::allocator<int>>::~vector
                    ((vector<int,std::allocator<int>> *)&local_140);
          std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                    ((vector<std::wstring,std::allocator<std::wstring>> *)&local_158);
          goto LAB_053ac354;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetSpacing");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 == 3) {
            bVar10 = true;
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140);
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
            cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_158);
            if (cVar9 != '\0') {
              plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
              if ((*(char *)(*plVar13 + 8) == '\0') &&
                 (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_170), cVar9 != '\0'
                 )) {
                *(undefined4 *)(local_158 + 0x10c) = local_170._0_4_;
                bVar10 = false;
              }
            }
            goto LAB_053ad2f4;
          }
          goto LAB_053abcb0;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetImageMap");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 4) goto LAB_053abcb0;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_170);
          ListDataElement::ListDataElement((ListDataElement *)&local_140);
          puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_190);
          if (cVar9 == '\0') {
LAB_053ad5f0:
            bVar7 = false;
            bVar10 = true;
          }
          else {
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            cVar9 = DescParser::DataToStringVector
                              ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_170);
            if (cVar9 == '\0') goto LAB_053ad5f0;
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),3);
            cVar9 = DescParser::DataToList
                              ((DescParser *)this,(DataElement *)*puVar16,
                               (ListDataElement *)&local_140);
            if (cVar9 == '\0') goto LAB_053ad5f0;
            lVar15 = FUN_053a1198(local_170,local_168);
            lVar27 = FUN_053a1178(local_130,local_128);
            if (lVar15 != lVar27) goto LAB_053ad6c4;
            pIVar25 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_190 + 0xe0));
            if (pIVar25 == (Image *)0x0) {
              pcVar41 = *(code **)(*(long *)this + 0x50);
              FUN_05478178(&local_158,L"Layer image not set",&local_180);
              (*pcVar41)(this,&local_158);
              FUN_05476c50(&local_158);
              nop();
LAB_053adacc:
              uVar39 = 0;
              ListDataElement::~ListDataElement((ListDataElement *)&local_140);
              std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                        ((vector<std::wstring,std::allocator<std::wstring>> *)&local_170);
              goto LAB_053abcf4;
            }
            pIVar25 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_190 + 0xe0));
            iVar11 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pIVar25);
            pIVar25 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)(local_190 + 0xe0));
            iVar12 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pIVar25);
            bVar10 = false;
            for (uVar21 = 0; uVar23 = FUN_053a1198(local_170,local_168), pFVar8 = local_190,
                uVar21 < uVar23; uVar21 = (ulong)((int)uVar21 + 1)) {
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_158
                        );
              FUN_053a11a4(local_170,uVar21);
              lVar15 = FUN_054765d0();
              if (lVar15 == 1) {
                puVar16 = (undefined8 *)FUN_02fd4a80(local_130,uVar21);
                cVar9 = DescParser::DataToIntVector
                                  ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_158);
                pLVar17 = local_158;
                if ((cVar9 == '\0') || (lVar15 = FUN_053a1184(local_158,local_150), lVar15 != 4))
                goto LAB_053ad8a0;
                piVar18 = (int *)FUN_053a1190(pLVar17,0);
                piVar30 = (int *)FUN_053a1190(pLVar17,1);
                piVar31 = (int *)FUN_053a1190(pLVar17,2);
                piVar32 = (int *)FUN_053a1190(pLVar17,3);
                Insets::Insets((Insets *)&local_180,*piVar18,*piVar30,*piVar31,*piVar32);
                pFVar8 = local_190;
                if ((0 < local_178) &&
                   (((((int)local_180 < 0 || ((long)local_180 < 0)) ||
                     (iVar11 < local_178 + (int)local_180)) ||
                    (iVar12 < local_180._4_4_ + local_174)))) {
                  pcVar41 = *(code **)(*(long *)this + 0x50);
                  FUN_05478178(&local_188,L"Image rectangle out of bounds",local_1a0);
                  (*pcVar41)(this,&local_188);
                  FUN_05476c50(&local_188);
                  nop();
                  std::vector<int,std::allocator<int>>::~vector
                            ((vector<int,std::allocator<int>> *)&local_158);
                  goto LAB_053adacc;
                }
                uVar40 = FUN_053a11a4(local_170,uVar21);
                pwVar14 = (wchar_t *)FUN_05476f5c(uVar40,0);
                puVar16 = (undefined8 *)FontLayer::GetCharData(pFVar8,*pwVar14);
                *puVar16 = local_180;
                puVar16[1] = CONCAT44(local_174,local_178);
              }
              else {
LAB_053ad8a0:
                bVar10 = true;
              }
              std::vector<int,std::allocator<int>>::~vector
                        ((vector<int,std::allocator<int>> *)&local_158);
            }
            *(undefined4 *)(local_190 + 0x128) = 0;
            iVar12 = FUN_053a113c(*(undefined8 *)(local_190 + 0x90),
                                  *(undefined8 *)(local_190 + 0x98));
            lVar15 = std::
                     vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                     front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                            *)(pFVar8 + 0x90));
            for (iVar11 = 0; iVar11 < iVar12; iVar11 = iVar11 + 1) {
              iVar4 = *(int *)(lVar15 + 0xc) + *(int *)(lVar15 + 0x14);
              if (*(int *)(local_190 + 0x128) < iVar4) {
                *(int *)(local_190 + 0x128) = iVar4;
              }
              lVar15 = lVar15 + 0x28;
            }
LAB_053adb84:
            bVar7 = false;
          }
LAB_053ad5f8:
          ListDataElement::~ListDataElement((ListDataElement *)&local_140);
          std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                    ((vector<std::wstring,std::allocator<std::wstring>> *)&local_170);
          goto LAB_053ac354;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetCharOffsets");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 == 4) {
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_170);
            ListDataElement::ListDataElement((ListDataElement *)&local_140);
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
            cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_188);
            if (cVar9 != '\0') {
              puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
              cVar9 = DescParser::DataToStringVector
                                ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_170);
              if (cVar9 != '\0') {
                puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),3);
                cVar9 = DescParser::DataToList
                                  ((DescParser *)this,(DataElement *)*puVar16,
                                   (ListDataElement *)&local_140);
                if (cVar9 != '\0') {
                  lVar15 = FUN_053a1198(local_170,local_168);
                  lVar27 = FUN_053a1178(local_130,local_128);
                  if (lVar15 == lVar27) {
                    bVar10 = false;
                    for (uVar21 = 0; uVar23 = FUN_053a1198(local_170,local_168), uVar21 < uVar23;
                        uVar21 = (ulong)((int)uVar21 + 1)) {
                      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                                 &local_158);
                      FUN_053a11a4(local_170,uVar21);
                      lVar15 = FUN_054765d0();
                      if (lVar15 == 1) {
                        puVar16 = (undefined8 *)FUN_02fd4a80(local_130,uVar21);
                        cVar9 = DescParser::DataToIntVector
                                          ((DescParser *)this,(DataElement *)*puVar16,
                                           (vector *)&local_158);
                        if ((cVar9 == '\0') ||
                           (lVar15 = FUN_053a1184(local_158,local_150), pLVar17 = local_188,
                           lVar15 != 2)) goto LAB_053ad800;
                        uVar40 = FUN_053a11a4(local_170,uVar21);
                        pwVar14 = (wchar_t *)FUN_05476f5c(uVar40,0);
                        lVar15 = FontLayer::GetCharData((FontLayer *)pLVar17,*pwVar14);
                        pLVar17 = local_158;
                        piVar18 = (int *)FUN_053a1190(local_158,0);
                        piVar30 = (int *)FUN_053a1190(pLVar17,1);
                        Point::Point((Point *)&local_180,*piVar18,*piVar30);
                        *(FontLayer **)(lVar15 + 0x10) = local_180;
                      }
                      else {
LAB_053ad800:
                        bVar10 = true;
                      }
                      std::vector<int,std::allocator<int>>::~vector
                                ((vector<int,std::allocator<int>> *)&local_158);
                    }
                    goto LAB_053adb84;
                  }
LAB_053ad6c4:
                  bVar10 = false;
                  bVar7 = true;
                  goto LAB_053ad5f8;
                }
              }
            }
            goto LAB_053ad5f0;
          }
          goto LAB_053abcb0;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetKerningPairs");
        if (iVar11 == 0) {
          lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          if (lVar15 != 4) goto LAB_053abcb0;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_170);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_158);
          puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
          cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_188);
          if (cVar9 == '\0') {
LAB_053adc04:
            bVar7 = false;
            bVar10 = true;
          }
          else {
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
            cVar9 = DescParser::DataToStringVector
                              ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_170);
            if (cVar9 == '\0') goto LAB_053adc04;
            puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),3);
            cVar9 = DescParser::DataToIntVector
                              ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_158);
            if (cVar9 == '\0') goto LAB_053adc04;
            lVar15 = FUN_053a1198(local_170,local_168);
            lVar27 = FUN_053a1184(local_158,local_150);
            bVar10 = false;
            if (lVar15 == lVar27) {
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140
                        );
              for (uVar21 = 0; pSVar19 = local_170, uVar23 = FUN_053a1198(local_170,local_168),
                  uVar21 < uVar23; uVar21 = (ulong)((int)uVar21 + 1)) {
                uVar40 = FUN_053a11a4(pSVar19,uVar21);
                lVar15 = FUN_054765d0();
                if (lVar15 == 2) {
                  pwVar14 = (wchar_t *)FUN_05476f5c(uVar40,0);
                  wVar5 = *pwVar14;
                  uVar40 = FUN_053a11a4(local_170,uVar21);
                  pwVar14 = (wchar_t *)FUN_05476f5c(uVar40,1);
                  piVar18 = (int *)FUN_053a1190(local_158,uVar21);
                  SortedKern::SortedKern((SortedKern *)&local_180,wVar5,*pwVar14,*piVar18);
                  std::vector<SortedKern,std::allocator<SortedKern>>::push_back
                            ((vector<SortedKern,std::allocator<SortedKern>> *)&local_140,
                             (SortedKern *)&local_180);
                }
                else {
                  bVar10 = true;
                }
              }
              cVar9 = std::vector<SortedKern,std::allocator<SortedKern>>::empty
                                ((vector<SortedKern,std::allocator<SortedKern>> *)&local_140);
              pFVar8 = local_140;
              if (cVar9 == '\0') {
                __base = (void *)FUN_02fd4a88(local_140,0);
                __nmemb = FUN_053a11ac(pFVar8,local_138);
                qsort(__base,__nmemb,0xc,SortedKern::Compare);
              }
              uVar21 = FUN_053a11ac(local_140,local_138);
              std::vector<int,std::allocator<int>>::resize
                        ((vector<int,std::allocator<int>> *)(local_188 + 0x70),uVar21);
              for (uVar21 = 0; pFVar8 = local_140, uVar23 = FUN_053a11ac(local_140,local_138),
                  uVar21 < uVar23; uVar21 = (ulong)((int)uVar21 + 1)) {
                pwVar14 = (wchar_t *)FUN_02fd4a88(pFVar8,uVar21);
                pLVar17 = local_188;
                puVar33 = (undefined2 *)FUN_053a1190(*(undefined8 *)(local_188 + 0x70),uVar21);
                *puVar33 = (short)pwVar14[1];
                puVar33[1] = (short)pwVar14[2];
                lVar15 = FontLayer::GetCharData((FontLayer *)pLVar17,*pwVar14);
                if (*(short *)(lVar15 + 0x1a) == 0) {
                  *(short *)(lVar15 + 0x18) = (short)uVar21;
                }
                *(short *)(lVar15 + 0x1a) = *(short *)(lVar15 + 0x1a) + 1;
              }
              bVar7 = false;
              std::vector<SortedKern,std::allocator<SortedKern>>::~vector
                        ((vector<SortedKern,std::allocator<SortedKern>> *)&local_140);
            }
            else {
              bVar7 = true;
            }
          }
          std::vector<int,std::allocator<int>>::~vector
                    ((vector<int,std::allocator<int>> *)&local_158);
          std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                    ((vector<std::wstring,std::allocator<std::wstring>> *)&local_170);
          goto LAB_053ac354;
        }
        iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetBaseOrder");
        if (iVar11 == 0) {
          uVar40 = *(undefined8 *)(param_1 + 0x10);
          lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
          if (lVar15 == 3) {
            puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
            cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
            if (cVar9 != '\0') {
              plVar13 = (long *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
              if ((*(char *)(*plVar13 + 8) == '\0') &&
                 (cVar9 = StringToInt((wstring *)(*plVar13 + 0x10),(int *)&local_158), cVar9 != '\0'
                 )) {
                uVar39 = 1;
                *(uint *)(local_140 + 0x130) = (uint)local_158;
                goto LAB_053abcf4;
              }
            }
            goto LAB_053abddc;
          }
LAB_053abcb0:
          pcVar41 = *(code **)(*(long *)this + 0x50);
          pwVar14 = L"Invalid Number of Parameters";
        }
        else {
          iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetCharOrders");
          if (iVar11 == 0) {
            lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
            if (lVar15 == 4) {
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_158
                        );
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140
                        );
              puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
              cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_170);
              if (cVar9 != '\0') {
                puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
                cVar9 = DescParser::DataToStringVector
                                  ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_158);
                if (cVar9 != '\0') {
                  puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),3);
                  cVar9 = DescParser::DataToIntVector
                                    ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_140
                                    );
                  if (cVar9 != '\0') {
                    lVar15 = FUN_053a1198(local_158,local_150);
                    lVar27 = FUN_053a1184(local_140,local_138);
                    if (lVar15 == lVar27) {
                      bVar10 = false;
                      for (uVar21 = 0; pLVar17 = local_158,
                          uVar23 = FUN_053a1198(local_158,local_150), uVar21 < uVar23;
                          uVar21 = (ulong)((int)uVar21 + 1)) {
                        uVar40 = FUN_053a11a4(pLVar17,uVar21);
                        lVar15 = FUN_054765d0();
                        pSVar19 = local_170;
                        if (lVar15 == 1) {
                          pwVar14 = (wchar_t *)FUN_05476f5c(uVar40,0);
                          lVar15 = FontLayer::GetCharData((FontLayer *)pSVar19,*pwVar14);
                          puVar29 = (undefined4 *)FUN_053a1190(local_140,uVar21);
                          *(undefined4 *)(lVar15 + 0x20) = *puVar29;
                        }
                        else {
                          bVar10 = true;
                        }
                      }
                      goto LAB_053ad648;
                    }
                    goto LAB_053ad474;
                  }
                }
              }
              goto LAB_053ad370;
            }
            goto LAB_053abcb0;
          }
          iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetExInfo");
          if (iVar11 == 0) {
            lVar15 = FUN_053a1178(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
            if (lVar15 == 4) {
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_158
                        );
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140
                        );
              puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
              cVar9 = DataToLayer(this,(DataElement *)*puVar16,(FontLayer **)&local_180);
              if (cVar9 != '\0') {
                puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
                cVar9 = DescParser::DataToStringVector
                                  ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_158);
                if (cVar9 != '\0') {
                  puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),3);
                  cVar9 = DescParser::DataToStringVector
                                    ((DescParser *)this,(DataElement *)*puVar16,(vector *)&local_140
                                    );
                  if (cVar9 != '\0') {
                    lVar15 = FUN_053a1198(local_158,local_150);
                    lVar27 = FUN_053a1198(local_140,local_138);
                    if (lVar15 == lVar27) {
                      for (uVar21 = 0; pLVar17 = local_158,
                          uVar23 = FUN_053a1198(local_158,local_150), uVar21 < uVar23;
                          uVar21 = uVar21 + 1) {
                        this_01 = (map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                                   *)(local_180 + 8);
                        pwVar34 = (wstring *)FUN_053a11a4(pLVar17,uVar21);
                        pwVar35 = (wstring *)FUN_053a11a4(local_140,uVar21);
                        std::pair<std::wstring_const,std::wstring>::
                        pair<std::wstring&,std::wstring&,void>
                                  ((pair<std::wstring_const,std::wstring> *)&local_170,pwVar34,
                                   pwVar35);
                        std::
                        map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                        ::insert<std::pair<std::wstring_const,std::wstring>,void>
                                  (this_01,(pair *)&local_170);
                        std::pair<std::wstring,std::wstring>::~pair
                                  ((pair<std::wstring,std::wstring> *)&local_170);
                      }
                      bVar7 = false;
                      bVar10 = false;
                    }
                    else {
                      bVar7 = true;
                      bVar10 = false;
                    }
                    goto LAB_053ac344;
                  }
                }
              }
              goto LAB_053ac33c;
            }
            goto LAB_053abcb0;
          }
          iVar11 = wcscasecmp_prime(pwVar14,L"LayerSetAlphaCorrection");
          if (iVar11 == 0) {
            uVar40 = *(undefined8 *)(param_1 + 0x10);
            lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
            if (lVar15 == 3) {
              local_158 = (ListDataElement *)((ulong)local_158 & 0xffffffff00000000);
              puVar16 = (undefined8 *)FUN_053a1170(uVar40,1);
              cVar9 = DataToLayer(this,(DataElement *)*puVar16,&local_140);
              if (cVar9 != '\0') {
                puVar16 = (undefined8 *)FUN_053a1170(*(undefined8 *)(param_1 + 0x10),2);
                cVar9 = DescParser::DataToInt
                                  ((DescParser *)this,(DataElement *)*puVar16,(int *)&local_158);
                if (cVar9 != '\0') {
                  uVar39 = 1;
                  local_140[0x134] = (FontLayer)((uint)local_158 != 0);
                  goto LAB_053abcf4;
                }
              }
              goto LAB_053abddc;
            }
            goto LAB_053abcb0;
          }
          pwVar14 = L"Unknown Command";
          pcVar41 = *(code **)(*(long *)this + 0x50);
        }
        goto LAB_053abcd4;
      }
      uVar40 = *(undefined8 *)(param_1 + 0x10);
      lVar15 = FUN_053a1178(uVar40,*(undefined8 *)(param_1 + 0x18));
      if (lVar15 != 3) goto LAB_053abcb0;
      plVar13 = (long *)FUN_053a1170(uVar40,1);
      if (*(char *)(*plVar13 + 8) == '\0') {
        ppFVar37 = (FontLayer **)&local_180;
        puVar16 = (undefined8 *)FUN_053a1170(uVar40,2);
        cVar9 = DataToLayer(this,(DataElement *)*puVar16,ppFVar37);
        if (cVar9 != '\0') {
          plVar2 = (list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>> *)(this + 0xd0);
          auVar43 = FUN_053a1170(*(undefined8 *)(param_1 + 0x10),1);
          StringToUpper((Sexy *)(*auVar43._0_8_ + 0x10),auVar43._8_8_);
          WStringToString((Sexy *)&local_140,(wstring *)0x0,(bool *)ppFVar37);
          FUN_05476c50((Sexy *)&local_140);
          FontLayer::FontLayer((FontLayer *)&local_140,local_180);
          std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::push_back
                    (plVar2,(FontLayer *)&local_140);
          FontLayer::~FontLayer((FontLayer *)&local_140);
          local_158 = (ListDataElement *)
                      std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                                ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>
                                  *)plVar2);
          thunk_FUN_05475e00(local_158 + 0x38,(string *)&local_170);
          pLVar17 = local_158;
          iVar11 = std::list<Sexy::FontLayer,std::allocator<Sexy::FontLayer>>::size(plVar2);
          *(int *)(pLVar17 + 0x130) = iVar11 + -1;
          std::pair<std::string_const,Sexy::FontLayer*>::pair<std::string&,Sexy::FontLayer*&,void>
                    ((pair<std::string_const,Sexy::FontLayer*> *)&local_140,(string *)&local_170,
                     (FontLayer **)&local_158);
          std::
          map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
          ::insert<std::pair<std::string_const,Sexy::FontLayer*>,void>
                    ((map<std::string,Sexy::FontLayer*,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::FontLayer*>>>
                      *)(this + 0xe0),(pair *)&local_140);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_140);
          if ((extraout_w1_00 & 0xff) == 0) {
            pcVar41 = *(code **)(*(long *)this + 0x50);
            FUN_05478178((Sexy *)&local_140,L"Layer Already Exists",&local_188);
            (*pcVar41)(this,(Sexy *)&local_140);
            FUN_05476c50((Sexy *)&local_140);
            nop();
          }
          uVar39 = 1;
          std::string::~string((string *)&local_170);
          goto LAB_053abcf4;
        }
      }
    }
  }
LAB_053abddc:
  uVar39 = 0;
  pcVar41 = *(code **)(*(long *)this + 0x50);
  FUN_05478178(&local_140,L"Invalid Paramater Type",&local_158);
  (*pcVar41)(this,&local_140);
  FUN_05476c50(&local_140);
  nop();
LAB_053abcf4:
  FUN_05476c50(auStack_198);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar39);
}

