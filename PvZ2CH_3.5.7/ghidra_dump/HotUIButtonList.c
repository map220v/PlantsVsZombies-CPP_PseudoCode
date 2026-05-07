// Class: HotUIButtonList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButtonList::StaticClassInit() */

void HotUIButtonList::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIButtonList");
    (*pcVar2)(plVar1,asStack_10,FUN_03621990,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButtonList::StaticGetClass() */

long * HotUIButtonList::StaticGetClass(void)

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
  uVar2 = HotUILayoutList::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIButtonList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIButtonList::HotUIButtonList() */

void __thiscall HotUIButtonList::HotUIButtonList(HotUIButtonList *this)

{
  HotUILayoutList::HotUILayoutList((HotUILayoutList *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0666b460;
  return;
}


/* HotUIButtonList::StaticNew() */

HotUIButtonList * HotUIButtonList::StaticNew(void)

{
  HotUIButtonList *this;
  
  this = ::operator_new(0x228);
  HotUIButtonList(this);
  return this;
}


/* HotUIButtonList::~HotUIButtonList() */

void __thiscall HotUIButtonList::~HotUIButtonList(HotUIButtonList *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666b460;
  HotUILayoutList::~HotUILayoutList((HotUILayoutList *)this);
  return;
}


/* HotUIButtonList::~HotUIButtonList() */

void __thiscall HotUIButtonList::~HotUIButtonList(HotUIButtonList *this)

{
  ~HotUIButtonList(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButtonList::GetButtons() */

void HotUIButtonList::GetButtons(void)

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
                      *)(in_x0 + 0x210));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x210));
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButtonList::normalizeFonts() */

void HotUIButtonList::normalizeFonts(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  PrimeTypeface *this;
  PrimeTypeface *pPVar4;
  PrimeTypeface *this_00;
  float fVar5;
  float fVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  bVar2 = true;
  local_8 = ___stack_chk_guard;
  GetButtons();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  this_00 = (PrimeTypeface *)0x0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this = (PrimeTypeface *)HotUIButton::GetFont((HotUIButton *)*puVar3);
    pPVar4 = this;
    if ((this_00 != (PrimeTypeface *)0x0) && (pPVar4 = this_00, this != this_00)) {
      fVar5 = (float)Sexy::PrimeTypeface::GetLineHeight(this);
      bVar2 = false;
      fVar6 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
      pPVar4 = this;
      if (fVar6 <= fVar5) {
        pPVar4 = this_00;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    this_00 = pPVar4;
  }
  if (!bVar2) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      HotUIButton::SetFont((HotUIButton *)*puVar3,this_00);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButtonList::onLayoutFinalized() */

void __thiscall HotUIButtonList::onLayoutFinalized(HotUIButtonList *this)

{
  normalizeFonts();
  HotUILayoutList::onLayoutFinalized((HotUILayoutList *)this);
  return;
}

