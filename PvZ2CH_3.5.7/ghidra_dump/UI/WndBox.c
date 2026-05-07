// Class: UI::WndBox


/* UI::WndBox::~WndBox() */

void __thiscall UI::WndBox::~WndBox(WndBox *this)

{
  std::map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  ::~map((map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
          *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::WndBox::reset() */

void __thiscall UI::WndBox::reset(WndBox *this)

{
  map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  *this_00;
  Rect<float> *pRVar1;
  float *extraout_x0;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  long lVar6;
  float fVar7;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  Rect<float> aRStack_28 [16];
  float local_18 [4];
  long local_8;
  
  this_00 = (map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  std::map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  ::clear(this_00);
  if (*(long **)this == (long *)0x0) goto LAB_04b6dce0;
  (**(code **)(**(long **)this + 0xd0))(&local_30);
  local_3c = (float)local_30;
  local_38 = (float)local_2c;
  local_34 = (float)(local_30 + *(int *)(*(long *)this + 0x50));
  local_18[0] = (float)(local_2c + *(int *)(*(long *)this + 0x54));
  Rect<float>::Rect(aRStack_28,&local_3c,&local_38,&local_34,local_18);
  local_44 = 1;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  nop();
  fVar7 = *extraout_x0;
  local_40 = fVar7 - 5.0;
  pfVar2 = (float *)EATextSquish::ColorSet::GetPoints((ColorSet *)aRStack_28);
  local_38 = fVar7 + 5.0;
  local_3c = *pfVar2 - 5.0;
  local_34 = *pfVar2 + 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_44 = 7;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  fVar7 = *pfVar2;
  local_3c = fVar7 - 5.0;
  local_40 = *extraout_x0 + 5.0;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)aRStack_28);
  local_34 = fVar7 + 5.0;
  local_38 = *pfVar3 - 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_44 = 2;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  local_40 = *pfVar3 - 5.0;
  local_3c = *pfVar2 - 5.0;
  local_38 = *pfVar3 + 5.0;
  local_34 = *pfVar2 + 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_44 = 8;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  local_40 = *extraout_x0 - 5.0;
  local_3c = *pfVar2 + 5.0;
  local_38 = *extraout_x0 + 5.0;
  pfVar4 = (float *)std::end<FestivalGameMode,3ul>(aRStack_28);
  local_34 = *pfVar4 - 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_44 = 9;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  local_40 = *pfVar3 - 5.0;
  local_3c = *pfVar2 + 5.0;
  local_38 = *pfVar3 + 5.0;
  local_34 = *pfVar4 - 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_44 = 3;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  local_40 = *extraout_x0 - 5.0;
  local_3c = *pfVar4 - 5.0;
  local_38 = *extraout_x0 + 5.0;
  local_34 = *pfVar4 + 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_44 = 10;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  local_3c = *pfVar4 - 5.0;
  local_40 = *extraout_x0 + 5.0;
  local_38 = *pfVar3 - 5.0;
  local_34 = *pfVar4 + 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_44 = 4;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  local_40 = *pfVar3 - 5.0;
  local_3c = *pfVar4 - 5.0;
  local_38 = *pfVar3 + 5.0;
  local_34 = *pfVar4 + 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_44 = 0xb;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  local_40 = *extraout_x0 + 5.0;
  local_3c = *pfVar2 + 5.0;
  local_38 = *pfVar3 - 5.0;
  local_34 = *pfVar4 - 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_34 = 1.54143e-44;
  puVar5 = (undefined4 *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,(int *)&local_34);
  fVar7 = (float)FUN_04b6c64c(*puVar5,puVar5[2]);
  if (fVar7 < 0.0) {
LAB_04b6dd1c:
    local_18[0] = 1.54143e-44;
    std::
    map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>::
    erase((int *)this_00);
  }
  else {
    local_18[0] = 1.54143e-44;
    lVar6 = std::
            map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
            ::operator[](this_00,(int *)local_18);
    fVar7 = (float)FUN_04b6c654(*(undefined4 *)(lVar6 + 4),*(undefined4 *)(lVar6 + 0xc));
    if (fVar7 < 0.0) goto LAB_04b6dd1c;
  }
  local_44 = 0xc;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_44);
  local_40 = *extraout_x0 - 5.0;
  local_3c = *pfVar2 - 5.0;
  local_38 = *pfVar3 + 5.0;
  local_34 = *pfVar4 + 5.0;
  Rect<float>::Rect((Rect<float> *)local_18,&local_40,&local_3c,&local_38,&local_34);
  Rect<float>::operator=(pRVar1,(Rect *)local_18);
  local_18[0] = 7.00649e-45;
  pRVar1 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,(int *)local_18);
  Rect<float>::operator=(pRVar1,(Rect *)aRStack_28);
LAB_04b6dce0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UI::WndBox::setWindow(Sexy::Widget*) */

void __thiscall UI::WndBox::setWindow(WndBox *this,Widget *param_1)

{
  *(Widget **)this = param_1;
  reset(this);
  return;
}


/* UI::WndBox::WndBox(Sexy::Widget*) */

void __thiscall UI::WndBox::WndBox(WndBox *this,Widget *param_1)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  setWindow(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::WndBox::getMouseType(UI::Vector2<float> const&) */

void __thiscall UI::WndBox::getMouseType(WndBox *this,Vector2 *param_1)

{
  map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  *this_00;
  char cVar1;
  Rect<float> *pRVar2;
  undefined4 uVar3;
  int local_c;
  long local_8;
  
  uVar3 = 0xb;
  this_00 = (map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
             *)(this + 8);
  local_c = 0xb;
  local_8 = ___stack_chk_guard;
  pRVar2 = (Rect<float> *)
           std::
           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
           ::operator[](this_00,&local_c);
  cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
  if (cVar1 == '\0') {
    uVar3 = 1;
    local_c = 1;
    pRVar2 = (Rect<float> *)
             std::
             map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
             ::operator[](this_00,&local_c);
    cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
    if (cVar1 == '\0') {
      uVar3 = 2;
      local_c = 2;
      pRVar2 = (Rect<float> *)
               std::
               map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
               ::operator[](this_00,&local_c);
      cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
      if (cVar1 == '\0') {
        uVar3 = 3;
        local_c = 3;
        pRVar2 = (Rect<float> *)
                 std::
                 map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                 ::operator[](this_00,&local_c);
        cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
        if (cVar1 == '\0') {
          uVar3 = 4;
          local_c = 4;
          pRVar2 = (Rect<float> *)
                   std::
                   map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                   ::operator[](this_00,&local_c);
          cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
          if (cVar1 == '\0') {
            uVar3 = 7;
            local_c = 7;
            pRVar2 = (Rect<float> *)
                     std::
                     map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                     ::operator[](this_00,&local_c);
            cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
            if (cVar1 == '\0') {
              uVar3 = 10;
              local_c = 10;
              pRVar2 = (Rect<float> *)
                       std::
                       map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                       ::operator[](this_00,&local_c);
              cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
              if (cVar1 == '\0') {
                uVar3 = 8;
                local_c = 8;
                pRVar2 = (Rect<float> *)
                         std::
                         map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                         ::operator[](this_00,&local_c);
                cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
                if (cVar1 == '\0') {
                  uVar3 = 9;
                  local_c = 9;
                  pRVar2 = (Rect<float> *)
                           std::
                           map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                           ::operator[](this_00,&local_c);
                  cVar1 = Rect<float>::isPointInRect(pRVar2,param_1);
                  if (cVar1 == '\0') {
                    uVar3 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::WndBox::draw(Sexy::Graphics*, Sexy::Color const&, bool) */

void __thiscall UI::WndBox::draw(WndBox *this,Graphics *param_1,Color *param_2,bool param_3)

{
  int iVar1;
  map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  *pmVar2;
  bool bVar3;
  float *extraout_x0;
  ColorSet *pCVar4;
  float *pfVar5;
  undefined4 *puVar6;
  long lVar7;
  float *extraout_x0_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Graphics *)0x0) && (*(long *)this != 0)) {
    Sexy::Graphics::SetColor(param_1,param_2);
    if (param_3) {
      pmVar2 = (map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                *)(this + 8);
      local_10 = CONCAT44(local_10._4_4_,1);
      do {
        std::
        map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
        ::operator[](pmVar2,(int *)&local_10);
        nop();
        fVar8 = *extraout_x0;
        pCVar4 = (ColorSet *)
                 std::
                 map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                 ::operator[](pmVar2,(int *)&local_10);
        pfVar5 = (float *)EATextSquish::ColorSet::GetPoints(pCVar4);
        fVar9 = *pfVar5;
        puVar6 = (undefined4 *)
                 std::
                 map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                 ::operator[](pmVar2,(int *)&local_10);
        fVar10 = (float)FUN_04b6c64c(*puVar6,puVar6[2]);
        lVar7 = std::
                map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                ::operator[](pmVar2,(int *)&local_10);
        fVar11 = (float)FUN_04b6c654(*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar7 + 0xc));
        Sexy::Graphics::DrawRect(param_1,(int)fVar8,(int)fVar9,(int)fVar10,(int)fVar11);
        iVar1 = (int)local_10 + 1;
        local_10 = CONCAT44(local_10._4_4_,iVar1);
      } while (iVar1 < 6);
    }
    else {
      pmVar2 = (map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                *)(this + 8);
      local_20[1] = 5;
      local_18 = std::
                 map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                 ::find(pmVar2,local_20 + 1);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)pmVar2);
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar3) {
        local_20[0] = 5;
        std::
        map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
        ::operator[](pmVar2,local_20);
        nop();
        fVar8 = *extraout_x0_00;
        local_20[1] = 5;
        pCVar4 = (ColorSet *)
                 std::
                 map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                 ::operator[](pmVar2,local_20 + 1);
        pfVar5 = (float *)EATextSquish::ColorSet::GetPoints(pCVar4);
        fVar9 = *pfVar5;
        local_18 = CONCAT44(local_18._4_4_,5);
        puVar6 = (undefined4 *)
                 std::
                 map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                 ::operator[](pmVar2,(int *)&local_18);
        fVar10 = (float)FUN_04b6c64c(*puVar6,puVar6[2]);
        local_10 = CONCAT44(local_10._4_4_,5);
        lVar7 = std::
                map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
                ::operator[](pmVar2,(int *)&local_10);
        fVar11 = (float)FUN_04b6c654(*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar7 + 0xc));
        Sexy::Graphics::DrawRect(param_1,(int)fVar8,(int)fVar9,(int)fVar10,(int)fVar11);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall UI::WndBox::~WndBox(WndBox *this)

{
  std::map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  ::~map((map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
          *)(this + 8));
  return;
}


void __thiscall UI::WndBox::~WndBox(WndBox *this)

{
  std::map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  ::~map((map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
          *)(this + 8));
  return;
}


void __thiscall UI::WndBox::~WndBox(WndBox *this)

{
  std::map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  ::~map((map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
          *)(this + 8));
  return;
}


/* UI::WndBox::WndBox(UI::WndBox const&) */

void __thiscall UI::WndBox::WndBox(WndBox *this,WndBox *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  ::map((map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
         *)(this + 8),(map *)(param_1 + 8));
  return;
}


/* UI::WndBox::TEMPNAMEPLACEHOLDERVALUE(UI::WndBox const&) */

WndBox * __thiscall UI::WndBox::operator=(WndBox *this,WndBox *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
  ::operator=((map<int,UI::Rect<float>,std::less<int>,std::allocator<std::pair<int_const,UI::Rect<float>>>>
               *)(this + 8),(map *)(param_1 + 8));
  return this;
}

