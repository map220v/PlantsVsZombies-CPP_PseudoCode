// Class: DigitalNumberWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DigitalNumberWidget::StaticClassInit() */

void DigitalNumberWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"DigitalNumberWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04de6cc4,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DigitalNumberWidget::StaticGetClass() */

long * DigitalNumberWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"DigitalNumberWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DigitalNumberWidget::GetClass() const */

long * DigitalNumberWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"DigitalNumberWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DigitalNumberWidget::DigitalNumberWidget() */

void __thiscall DigitalNumberWidget::DigitalNumberWidget(DigitalNumberWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069cb950;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  *(undefined4 *)(this + 0xd4) = 2;
  *(undefined4 *)(this + 0xd8) = 99;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xe0));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::clear
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0xf8));
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  return;
}


/* DigitalNumberWidget::StaticNew() */

DigitalNumberWidget * DigitalNumberWidget::StaticNew(void)

{
  DigitalNumberWidget *this;
  
  this = ::operator_new(0x118);
  DigitalNumberWidget(this);
  return this;
}


/* DigitalNumberWidget::~DigitalNumberWidget() */

void __thiscall DigitalNumberWidget::~DigitalNumberWidget(DigitalNumberWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069cb950;
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0xf8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DigitalNumberWidget::~DigitalNumberWidget() */

void __thiscall DigitalNumberWidget::~DigitalNumberWidget(DigitalNumberWidget *this)

{
  ~DigitalNumberWidget(this);
  AK::FreeHook(this);
  return;
}


/* DigitalNumberWidget::InitNumberImages(std::vector<Sexy::RtWeakPtr<Sexy::Image>,
   std::allocator<Sexy::RtWeakPtr<Sexy::Image> > >) */

void __thiscall
DigitalNumberWidget::InitNumberImages
          (DigitalNumberWidget *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::clear
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0xf8));
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
  assign<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Sexy::Image>*,std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>>,void>
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0xf8),uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DigitalNumberWidget::UpdateNumber() */

void __thiscall DigitalNumberWidget::UpdateNumber(DigitalNumberWidget *this)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double __y;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xe0));
  iVar1 = *(int *)(this + 0xd8);
  if (0 < *(int *)(this + 0xd4)) {
    iVar2 = *(int *)(this + 0xd4) + -1;
    do {
      __y = (double)iVar2;
      iVar2 = iVar2 + -1;
      dVar3 = pow(10.0,-__y);
      local_c = (int)(dVar3 * (double)iVar1);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0xe0),&local_c);
      dVar3 = pow(10.0,__y);
      iVar1 = (int)((double)iVar1 - (double)local_c * dVar3);
    } while (iVar2 != -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DigitalNumberWidget::SetNumberCount(int) */

void __thiscall DigitalNumberWidget::SetNumberCount(DigitalNumberWidget *this,int param_1)

{
  *(int *)(this + 0xd4) = param_1;
  UpdateNumber(this);
  return;
}


/* DigitalNumberWidget::SetNumber(int) */

void __thiscall DigitalNumberWidget::SetNumber(DigitalNumberWidget *this,int param_1)

{
  *(int *)(this + 0xd8) = param_1;
  UpdateNumber(this);
  return;
}


/* DigitalNumberWidget::Draw(Sexy::Graphics*) */

void __thiscall DigitalNumberWidget::Draw(DigitalNumberWidget *this,Graphics *param_1)

{
  int *piVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0xe0);
    uVar3 = FUN_04de69c4(uVar5,*(undefined8 *)(this + 0xe8));
    if (uVar3 <= uVar4) break;
    piVar1 = (int *)FUN_04de69d4(uVar5,uVar4);
    this_00 = (RtWeakPtr *)FUN_04de69dc(*(undefined8 *)(this + 0xf8),(long)*piVar1);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar2,*(int *)(this + 0x110) * (int)uVar4,0,*(int *)(this + 0x110),
               *(int *)(this + 0x114));
    uVar4 = uVar4 + 1;
  }
  return;
}


/* DigitalNumberWidget::Resize(int, int, int, int) */

void __thiscall
DigitalNumberWidget::Resize
          (DigitalNumberWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar1 = *(int *)(this + 0xd4);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_3 / iVar1;
    }
    *(int *)(this + 0x110) = iVar2;
  }
  *(int *)(this + 0x114) = param_4;
  return;
}

