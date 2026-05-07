// Class: TitleIconState


/* TitleIconState::TitleIconState() */

void __thiscall TitleIconState::TitleIconState(TitleIconState *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


/* TitleIconState::TitleIconState(int, float) */

void __thiscall TitleIconState::TitleIconState(TitleIconState *this,int param_1,float param_2)

{
  *(float *)(this + 4) = param_2;
  *(int *)this = param_1;
  return;
}

