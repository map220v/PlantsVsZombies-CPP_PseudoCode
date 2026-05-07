// Class: UINewPlantView_Classify


/* UINewPlantView_Classify::UINewPlantView_Classify() */

void __thiscall UINewPlantView_Classify::UINewPlantView_Classify(UINewPlantView_Classify *this)

{
  UISingletonDialog<UINewPlantView_Classify>::UISingletonDialog
            ((UISingletonDialog<UINewPlantView_Classify> *)this);
  *(undefined ***)this = &PTR_GetClass_066a3c50;
  *(undefined **)(this + 0xd8) = &DAT_066a3fa0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_Classify::GetLayoutName() */

void __thiscall UINewPlantView_Classify::GetLayoutName(UINewPlantView_Classify *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPlantView_Classify");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPlantView_Classify::~UINewPlantView_Classify() */

void __thiscall UINewPlantView_Classify::~UINewPlantView_Classify(UINewPlantView_Classify *this)

{
  *(undefined ***)this = &PTR_GetClass_066a3c50;
  *(undefined **)(this + 0xd8) = &DAT_066a3fa0;
  UISingletonDialog<UINewPlantView_Classify>::~UISingletonDialog
            ((UISingletonDialog<UINewPlantView_Classify> *)this);
  return;
}


/* UINewPlantView_Classify::~UINewPlantView_Classify() */

void __thiscall UINewPlantView_Classify::~UINewPlantView_Classify(UINewPlantView_Classify *this)

{
  ~UINewPlantView_Classify(this);
  AK::FreeHook(this);
  return;
}


/* UINewPlantView_Classify::ButtonDepress(int) */

void __thiscall UINewPlantView_Classify::ButtonDepress(UINewPlantView_Classify *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UINewPlantView_Classify>::CloseDialog();
  return;
}


/* non-virtual thunk to UINewPlantView_Classify::ButtonDepress(int) */

void __thiscall UINewPlantView_Classify::ButtonDepress(UINewPlantView_Classify *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

