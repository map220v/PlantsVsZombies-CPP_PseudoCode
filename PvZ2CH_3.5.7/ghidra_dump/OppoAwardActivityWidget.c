// Class: OppoAwardActivityWidget


/* OppoAwardActivityWidget::ButtonDepress(int) */

void __thiscall OppoAwardActivityWidget::ButtonDepress(OppoAwardActivityWidget *this,int param_1)

{
  if (param_1 != 2) {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* non-virtual thunk to OppoAwardActivityWidget::ButtonDepress(int) */

void __thiscall OppoAwardActivityWidget::ButtonDepress(OppoAwardActivityWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* OppoAwardActivityWidget::~OppoAwardActivityWidget() */

void __thiscall OppoAwardActivityWidget::~OppoAwardActivityWidget(OppoAwardActivityWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066c93c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066c96e8;
  ChristmasAwardActivityWidget::~ChristmasAwardActivityWidget((ChristmasAwardActivityWidget *)this);
  return;
}


/* OppoAwardActivityWidget::~OppoAwardActivityWidget() */

void __thiscall OppoAwardActivityWidget::~OppoAwardActivityWidget(OppoAwardActivityWidget *this)

{
  ~OppoAwardActivityWidget(this);
  AK::FreeHook(this);
  return;
}


/* OppoAwardActivityWidget::OppoAwardActivityWidget(int, int, bool, std::vector<NDLoginRewardBonus,
   std::allocator<NDLoginRewardBonus> >&) */

void __thiscall
OppoAwardActivityWidget::OppoAwardActivityWidget
          (OppoAwardActivityWidget *this,int param_1,int param_2,bool param_3,vector *param_4)

{
  ChristmasAwardActivityWidget::ChristmasAwardActivityWidget
            ((ChristmasAwardActivityWidget *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_GetClass_066c93c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066c96e8;
  return;
}

