// Class: HotUIVerticalButtonList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalButtonList::StaticClassInit() */

void HotUIVerticalButtonList::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIVerticalButtonList");
    (*pcVar2)(plVar1,asStack_10,FUN_03652c44,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIVerticalButtonList::StaticGetClass() */

long * HotUIVerticalButtonList::StaticGetClass(void)

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
  uVar2 = HotUIVerticalList::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIVerticalButtonList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIVerticalButtonList::HotUIVerticalButtonList() */

void __thiscall HotUIVerticalButtonList::HotUIVerticalButtonList(HotUIVerticalButtonList *this)

{
  HotUIVerticalList::HotUIVerticalList((HotUIVerticalList *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_06673800;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x238));
  return;
}


/* HotUIVerticalButtonList::StaticNew() */

HotUIVerticalButtonList * HotUIVerticalButtonList::StaticNew(void)

{
  HotUIVerticalButtonList *this;
  
  this = ::operator_new(0x250);
  HotUIVerticalButtonList(this);
  return this;
}


/* HotUIVerticalButtonList::~HotUIVerticalButtonList() */

void __thiscall HotUIVerticalButtonList::~HotUIVerticalButtonList(HotUIVerticalButtonList *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06673800;
  std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::~vector
            ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)(this + 0x238));
  HotUIVerticalList::~HotUIVerticalList((HotUIVerticalList *)this);
  return;
}


/* HotUIVerticalButtonList::~HotUIVerticalButtonList() */

void __thiscall HotUIVerticalButtonList::~HotUIVerticalButtonList(HotUIVerticalButtonList *this)

{
  ~HotUIVerticalButtonList(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalButtonList::RemoveWidget(Sexy::Widget*) */

void __thiscall HotUIVerticalButtonList::RemoveWidget(HotUIVerticalButtonList *this,Widget *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  HotUIWidget *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIVerticalList::RemoveWidget((HotUIVerticalList *)this,param_1);
  if (param_1 != (Widget *)0x0) {
    local_20 = Sexy::RtObject::Cast<HotUIWidget>((RtObject *)param_1);
    if (local_20 != (HotUIWidget *)0x0) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x238);
      uVar2 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<HotUIWidget**,std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>>,HotUIWidget*>
                           (uVar2,uVar3,&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar1) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::erase
                  ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)this_00,local_10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalButtonList::AddWidget(Sexy::Widget*) */

void __thiscall HotUIVerticalButtonList::AddWidget(HotUIVerticalButtonList *this,Widget *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  HotUIWidget *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::AddWidget((HotUIWidget *)this,param_1);
  if (param_1 != (Widget *)0x0) {
    local_20 = Sexy::RtObject::Cast<HotUIWidget>((RtObject *)param_1);
    if (local_20 != (HotUIWidget *)0x0) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x238);
      uVar2 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<HotUIWidget**,std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>>,HotUIWidget*>
                           (uVar2,uVar3,&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar1) {
        std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::push_back
                  ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)this_00,&local_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalButtonList::GetButtons() */

void HotUIVerticalButtonList::GetButtons(void)

{
  bool bVar1;
  long in_x0;
  undefined8 *puVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_20;
  undefined8 local_18;
  HotUIButton *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x238));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x238));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if ((RtObject *)*puVar2 != (RtObject *)0x0) {
      local_10 = Sexy::RtObject::Cast<HotUIButton>((RtObject *)*puVar2);
      if (local_10 != (HotUIButton *)0x0) {
        std::vector<HotUIButton*,std::allocator<HotUIButton*>>::push_back
                  ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)in_x8,&local_10);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

