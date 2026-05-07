// Class: HotUITouchCloseWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITouchCloseWidget::StaticClassInit() */

void HotUITouchCloseWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITouchCloseWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_033bfce8,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITouchCloseWidget::StaticGetClass() */

long * HotUITouchCloseWidget::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITouchCloseWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITouchCloseWidget::HotUITouchCloseWidget() */

void __thiscall HotUITouchCloseWidget::HotUITouchCloseWidget(HotUITouchCloseWidget *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_06617a40;
  return;
}


/* HotUITouchCloseWidget::StaticNew() */

HotUITouchCloseWidget * HotUITouchCloseWidget::StaticNew(void)

{
  HotUITouchCloseWidget *this;
  
  this = ::operator_new(0x218);
  HotUITouchCloseWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITouchCloseWidget::CheckTargetWidget(std::string const&, int, int) */

void __thiscall
HotUITouchCloseWidget::CheckTargetWidget
          (HotUITouchCloseWidget *this,string *param_1,int param_2,int param_3)

{
  char cVar1;
  HotUISeedPacketList *pHVar2;
  int local_28 [2];
  undefined1 auStack_20 [4];
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                     (*(HotUIFile **)(*(long *)(this + 0x210) + 0xf8),param_1);
  (**(code **)(*(long *)pHVar2 + 0xd0))(local_28);
  (**(code **)(*(long *)pHVar2 + 0xd0))(auStack_20,pHVar2);
  Sexy::Insets::Insets
            (aIStack_18,local_28[0],local_1c,*(int *)(pHVar2 + 0x50),*(int *)(pHVar2 + 0x54));
  cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITouchCloseWidget::OnTouchBegan(Sexy::Touch const&) */

void __thiscall HotUITouchCloseWidget::OnTouchBegan(HotUITouchCloseWidget *this,Touch *param_1)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long extraout_x0;
  string *psVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x210) != 0) {
    HotUIWidget::GetProps();
    nop();
    this_00 = (vector<std::string,std::allocator<std::string>> *)(extraout_x0 + 0x128);
    cVar3 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
    if (cVar3 == '\0') {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x14);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      while( true ) {
        bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!bVar4) break;
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar3 = FUN_0547419c();
        if (cVar3 == '\0') {
          CheckTargetWidget(this,psVar5,iVar1,iVar2);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      (**(code **)(*(long *)this + 0x158))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITouchCloseWidget::~HotUITouchCloseWidget() */

void __thiscall HotUITouchCloseWidget::~HotUITouchCloseWidget(HotUITouchCloseWidget *this)

{
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_06617a40;
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUITouchCloseWidget::~HotUITouchCloseWidget() */

void __thiscall HotUITouchCloseWidget::~HotUITouchCloseWidget(HotUITouchCloseWidget *this)

{
  ~HotUITouchCloseWidget(this);
  AK::FreeHook(this);
  return;
}

