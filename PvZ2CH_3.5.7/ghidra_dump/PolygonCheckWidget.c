// Class: PolygonCheckWidget


/* PolygonCheckWidget::~PolygonCheckWidget() */

void __thiscall PolygonCheckWidget::~PolygonCheckWidget(PolygonCheckWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069563d0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x110));
  PolygonCheck::~PolygonCheck((PolygonCheck *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PolygonCheckWidget::~PolygonCheckWidget() */

void __thiscall PolygonCheckWidget::~PolygonCheckWidget(PolygonCheckWidget *this)

{
  ~PolygonCheckWidget(this);
  AK::FreeHook(this);
  return;
}


/* PolygonCheckWidget::TouchesCanceled() */

void __thiscall PolygonCheckWidget::TouchesCanceled(PolygonCheckWidget *this)

{
  (**(code **)(*(long *)this + 0x328))();
  this[0x10c] = (PolygonCheckWidget)0x0;
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  return;
}


/* PolygonCheckWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall PolygonCheckWidget::TouchBegan(PolygonCheckWidget *this,Touch *param_1)

{
  undefined4 uVar1;
  
  uVar1 = PolygonCheck::doCheck((PolygonCheck *)(this + 0xd8),(Point *)(param_1 + 0x10),-1);
  *(undefined4 *)(this + 0x108) = uVar1;
  this[0x10c] = (PolygonCheckWidget)0x1;
  (**(code **)(*(long *)this + 0x310))(this,uVar1);
  return;
}


/* PolygonCheckWidget::TouchMoved(Sexy::Touch const&) */

void __thiscall PolygonCheckWidget::TouchMoved(PolygonCheckWidget *this,Touch *param_1)

{
  int iVar1;
  
  iVar1 = PolygonCheck::doCheck((PolygonCheck *)(this + 0xd8),(Point *)(param_1 + 0x10),-1);
  if (*(int *)(this + 0x108) != -1) {
    this[0x10c] = (PolygonCheckWidget)(iVar1 == *(int *)(this + 0x108));
  }
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* PolygonCheckWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall PolygonCheckWidget::TouchEnded(PolygonCheckWidget *this,Touch *param_1)

{
  undefined4 uVar1;
  
  uVar1 = PolygonCheck::doCheck((PolygonCheck *)(this + 0xd8),(Point *)(param_1 + 0x10),-1);
  (**(code **)(*(long *)this + 800))(this,uVar1);
  this[0x10c] = (PolygonCheckWidget)0x0;
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  return;
}


/* PolygonCheckWidget::PolygonCheckWidget() */

void __thiscall PolygonCheckWidget::PolygonCheckWidget(PolygonCheckWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::AndroidGL20RenderEffect::ParamCollection::ParamCollection((ParamCollection *)(this + 0xd8));
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  this[0x10c] = (PolygonCheckWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_069563d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  return;
}

