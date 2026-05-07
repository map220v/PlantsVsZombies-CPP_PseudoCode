// Class: EA::Text::Internal


/* void EA::Text::Internal::swap<int>(int&, int&) */

void EA::Text::Internal::swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

