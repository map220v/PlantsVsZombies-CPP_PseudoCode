// Class: UIWidgetType


/* UIWidgetType::~UIWidgetType() */

void __thiscall UIWidgetType::~UIWidgetType(UIWidgetType *this)

{
  std::vector<UIWidgetType,std::allocator<UIWidgetType>>::~vector
            ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)(this + 0x88));
  std::string::~string((string *)(this + 0x80));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* UIWidgetType::UIWidgetType(UIWidgetType const&) */

void __thiscall UIWidgetType::UIWidgetType(UIWidgetType *this,UIWidgetType *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetType UVar5;
  undefined8 uVar6;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  UVar5 = param_1[0x24];
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  this[0x24] = UVar5;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar4;
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x4c) = uVar6;
  Sexy::Insets::Insets((Insets *)(this + 0x54),(Insets *)(param_1 + 0x54));
  Sexy::Insets::Insets((Insets *)(this + 100),(Insets *)(param_1 + 100));
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x7c) = uVar1;
  FUN_05475d88(this + 0x80,param_1 + 0x80);
  std::vector<UIWidgetType,std::allocator<UIWidgetType>>::vector
            ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  UVar5 = param_1[0xa0];
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  this[0xa0] = UVar5;
  *(undefined4 *)(this + 0xa4) = uVar1;
  return;
}


/* UIWidgetType::TEMPNAMEPLACEHOLDERVALUE(UIWidgetType const&) */

UIWidgetType * __thiscall UIWidgetType::operator=(UIWidgetType *this,UIWidgetType *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  UIWidgetType UVar9;
  undefined8 uVar10;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  UVar9 = param_1[0x24];
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  this[0x24] = UVar9;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x1c) = uVar7;
  *(undefined4 *)(this + 0x20) = uVar8;
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x74);
  uVar1 = *(undefined8 *)(param_1 + 0x54);
  uVar3 = *(undefined8 *)(param_1 + 0x5c);
  uVar2 = *(undefined8 *)(param_1 + 100);
  uVar4 = *(undefined8 *)(param_1 + 0x6c);
  uVar10 = *(undefined8 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x4c) = uVar10;
  uVar6 = *(undefined4 *)(param_1 + 0x7c);
  uVar7 = *(undefined4 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x54) = uVar1;
  *(undefined8 *)(this + 0x5c) = uVar3;
  *(undefined8 *)(this + 100) = uVar2;
  *(undefined8 *)(this + 0x6c) = uVar4;
  *(undefined4 *)(this + 0x74) = uVar5;
  *(undefined4 *)(this + 0x78) = uVar7;
  *(undefined4 *)(this + 0x7c) = uVar6;
  thunk_FUN_05475e00(this + 0x80,param_1 + 0x80);
  std::vector<UIWidgetType,std::allocator<UIWidgetType>>::operator=
            ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  UVar9 = param_1[0xa0];
  uVar5 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  this[0xa0] = UVar9;
  *(undefined4 *)(this + 0xa4) = uVar5;
  return this;
}


/* UIWidgetType::InitWidget(Sexy::Widget*) */

void __thiscall UIWidgetType::InitWidget(UIWidgetType *this,Widget *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (param_1 != (Widget *)0x0) {
    fVar5 = (float)FUN_04b80888(*(undefined4 *)(this + 0x14));
    uVar1 = FloatRoundToInt(fVar5);
    fVar5 = (float)FUN_04b80888(*(undefined4 *)(this + 0x18));
    uVar2 = FloatRoundToInt(fVar5);
    fVar5 = (float)FUN_04b80888(*(undefined4 *)(this + 0x1c));
    uVar3 = FloatRoundToInt(fVar5);
    fVar5 = (float)FUN_04b80888(*(undefined4 *)(this + 0x20));
    uVar4 = FloatRoundToInt(fVar5);
    (**(code **)(*(long *)param_1 + 0x198))(param_1,uVar1,uVar2,uVar3,uVar4);
    *(UIWidgetType *)(param_1 + 0x59) = this[0x24];
  }
  return;
}


/* UIWidgetType::IsAutoWidget(Sexy::Widget*) */

undefined8 UIWidgetType::IsAutoWidget(Widget *param_1)

{
  long lVar1;
  
  if ((param_1 != (Widget *)0x0) && (lVar1 = FUN_05474374(param_1 + 0xc0,"__auto_",0), lVar1 == 0))
  {
    return 1;
  }
  return 0;
}


/* UIWidgetType::UIWidgetType() */

void __thiscall UIWidgetType::UIWidgetType(UIWidgetType *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  this[0x24] = (UIWidgetType)0x1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0x42480000;
  *(undefined4 *)(this + 0x20) = 0x42480000;
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  *(undefined4 *)(this + 0x48) = 2;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x4c),1.0,1.0);
  Sexy::Color::Color((Color *)(this + 0x54),0);
  Sexy::Color::Color((Color *)(this + 100),1);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x74) = 0xffffffff;
  *(undefined4 *)(this + 0x7c) = 0;
  Set8BytesTo0(this + 0x80);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  this[0xa0] = (UIWidgetType)0x1;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetType::ToWidget(Sexy::Widget*) */

void __thiscall UIWidgetType::ToWidget(UIWidgetType *this,Widget *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (Widget *)0x0) ||
     (bVar1 = std::operator!=((string *)(param_1 + 200),(string *)this), !bVar1)) {
    local_18 = std::
               map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
               ::find((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                       *)gWidgetFactoryManager,(string *)this);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)gWidgetFactoryManager);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      puVar2 = (undefined8 *)
               std::
               map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
               ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                             *)gWidgetFactoryManager,(string *)this);
      uVar3 = (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,this,param_1);
      goto LAB_04b84878;
    }
  }
  uVar3 = 0;
LAB_04b84878:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetType::IsPropertyNeedWrite(std::string const&) */

void __thiscall UIWidgetType::IsPropertyNeedWrite(UIWidgetType *this,string *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::find((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                     *)gWidgetFactoryManager,(string *)this);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)gWidgetFactoryManager);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  uVar2 = 0;
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)gWidgetFactoryManager,(string *)this);
    uVar2 = (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetType::HasProperty(std::string const&) */

void __thiscall UIWidgetType::HasProperty(UIWidgetType *this,string *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::find((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                     *)gWidgetFactoryManager,(string *)this);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)gWidgetFactoryManager);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  uVar2 = 0;
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)gWidgetFactoryManager,(string *)this);
    uVar2 = (**(code **)(*(long *)*puVar3 + 0x20))((long *)*puVar3,this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetType::FromWidget(Sexy::Widget*, bool) */

void __thiscall UIWidgetType::FromWidget(UIWidgetType *this,Widget *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Widget *pWVar5;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [22];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Widget *)0x0) {
    local_c0 = std::
               map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
               ::find((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                       *)gWidgetFactoryManager,(string *)(param_1 + 200));
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)gWidgetFactoryManager);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_c0,(exception_ptr *)local_b8);
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)
               std::
               map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
               ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                             *)gWidgetFactoryManager,(string *)(param_1 + 200));
      cVar1 = (**(code **)(*(long *)*puVar4 + 8))((long *)*puVar4,this,param_1);
      if (cVar1 != '\0') {
        uVar3 = 1;
        if (param_2) {
          local_c8 = FUN_04b83c74(*(undefined8 *)(param_1 + 8));
          local_c0 = std::
                     __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                               ((TaskResource **)(param_1 + 8));
          while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_c8,(rbtree_iterator *)&local_c0
                                          ), bVar2) {
            puVar4 = (undefined8 *)
                     std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_c8);
            pWVar5 = (Widget *)*puVar4;
            cVar1 = FUN_0547419c(pWVar5 + 200);
            if ((cVar1 == '\0') && (cVar1 = IsAutoWidget(pWVar5), cVar1 == '\0')) {
              UIWidgetType((UIWidgetType *)local_b8);
              cVar1 = FromWidget((UIWidgetType *)local_b8,pWVar5,true);
              if (cVar1 != '\0') {
                std::vector<UIWidgetType,std::allocator<UIWidgetType>>::push_back
                          ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)(this + 0x88),
                           (UIWidgetType *)local_b8);
              }
              ~UIWidgetType((UIWidgetType *)local_b8);
            }
            std::_List_const_iterator<Sexy::FontLayer>::operator++
                      ((_List_const_iterator<Sexy::FontLayer> *)&local_c8);
          }
          uVar3 = 1;
        }
        goto LAB_04b84c44;
      }
    }
  }
  uVar3 = 0;
LAB_04b84c44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

