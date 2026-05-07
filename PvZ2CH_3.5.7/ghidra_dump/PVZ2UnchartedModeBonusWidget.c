// Class: PVZ2UnchartedModeBonusWidget


/* PVZ2UnchartedModeBonusWidget::~PVZ2UnchartedModeBonusWidget() */

void __thiscall
PVZ2UnchartedModeBonusWidget::~PVZ2UnchartedModeBonusWidget(PVZ2UnchartedModeBonusWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069d1160;
  PVZ1ModeSelectLevelBonusWidget::~PVZ1ModeSelectLevelBonusWidget
            ((PVZ1ModeSelectLevelBonusWidget *)this);
  return;
}


/* PVZ2UnchartedModeBonusWidget::~PVZ2UnchartedModeBonusWidget() */

void __thiscall
PVZ2UnchartedModeBonusWidget::~PVZ2UnchartedModeBonusWidget(PVZ2UnchartedModeBonusWidget *this)

{
  ~PVZ2UnchartedModeBonusWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UnchartedModeBonusWidget::PVZ2UnchartedModeBonusWidget(int, int, bool) */

void __thiscall
PVZ2UnchartedModeBonusWidget::PVZ2UnchartedModeBonusWidget
          (PVZ2UnchartedModeBonusWidget *this,int param_1,int param_2,bool param_3)

{
  PVZ1ModeSelectLevelBonusWidget::PVZ1ModeSelectLevelBonusWidget
            ((PVZ1ModeSelectLevelBonusWidget *)this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_GetClass_069d1160;
  return;
}

