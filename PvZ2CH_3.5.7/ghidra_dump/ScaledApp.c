// Class: ScaledApp


/* ScaledApp::GetUIScaleAmount() */

undefined4 __thiscall ScaledApp::GetUIScaleAmount(ScaledApp *this)

{
  return *(undefined4 *)(this + 0x9a8);
}


/* ScaledApp::UIScaleNum(int) */

int __thiscall ScaledApp::UIScaleNum(ScaledApp *this,int param_1)

{
  float fVar1;
  
  fVar1 = (float)GetUIScaleAmount(this);
  return (int)(fVar1 * (float)param_1);
}


/* ScaledApp::~ScaledApp() */

void __thiscall ScaledApp::~ScaledApp(ScaledApp *this)

{
  *(undefined ***)this = &PTR_ButtonPress_0660f990;
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_0660fdf8;
  ConsoleApp::~ConsoleApp((ConsoleApp *)this);
  return;
}


/* ScaledApp::~ScaledApp() */

void __thiscall ScaledApp::~ScaledApp(ScaledApp *this)

{
  ~ScaledApp(this);
  AK::FreeHook(this);
  return;
}


/* ScaledApp::SetResolution(int) */

void __thiscall ScaledApp::SetResolution(ScaledApp *this,int param_1)

{
  *(int *)(this + 0x9b0) = param_1;
  *(float *)(this + 0x9a0) = (float)param_1 / (float)*(int *)(this + 0x9b8);
  *(int *)(this + 0x9a4) = (int)((float)param_1 / (float)*(int *)(this + 0x9b8) + 0.2);
  return;
}


/* ScaledApp::ScaledApp() */

void __thiscall ScaledApp::ScaledApp(ScaledApp *this)

{
  ConsoleApp::ConsoleApp((ConsoleApp *)this);
  *(undefined4 *)(this + 0x9b8) = 600;
  *(undefined ***)this = &PTR_ButtonPress_0660f990;
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_0660fdf8;
  SetResolution(this,0x4b0);
  return;
}


/* ScaledApp::SetUIResolution(int) */

void __thiscall ScaledApp::SetUIResolution(ScaledApp *this,int param_1)

{
  *(int *)(this + 0x9b4) = param_1;
  *(float *)(this + 0x9a8) = (float)param_1 / (float)*(int *)(this + 0x9b8);
  *(int *)(this + 0x9ac) = (int)((float)param_1 / (float)*(int *)(this + 0x9b8) + 0.2);
  return;
}


/* ScaledApp::GetScaleAmount() */

undefined4 __thiscall ScaledApp::GetScaleAmount(ScaledApp *this)

{
  return *(undefined4 *)(this + 0x9a0);
}


/* ScaledApp::ScaleNum(int) */

int __thiscall ScaledApp::ScaleNum(ScaledApp *this,int param_1)

{
  float fVar1;
  
  fVar1 = (float)GetScaleAmount(this);
  return (int)(fVar1 * (float)param_1);
}


/* ScaledApp::ScaleNum(float) */

float __thiscall ScaledApp::ScaleNum(ScaledApp *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)GetScaleAmount(this);
  return fVar1 * param_1;
}


/* ScaledApp::ScreenScaleNum(int) */

int __thiscall ScaledApp::ScreenScaleNum(ScaledApp *this,int param_1)

{
  float fVar1;
  
  fVar1 = (float)GetScaleAmount(this);
  return (int)((float)param_1 / fVar1);
}


/* ScaledApp::UIScaleNum(float) */

float __thiscall ScaledApp::UIScaleNum(ScaledApp *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)GetUIScaleAmount(this);
  return fVar1 * param_1;
}


/* ScaledApp::ScaleNum(Sexy::TRect<int> const&) */

void ScaledApp::ScaleNum(TRect *param_1)

{
  int *in_x1;
  Insets *in_x8;
  float fVar1;
  
  fVar1 = (float)GetScaleAmount((ScaledApp *)param_1);
  Sexy::Insets::Insets
            (in_x8,(int)(fVar1 * (float)*in_x1),(int)(fVar1 * (float)in_x1[1]),
             (int)(fVar1 * (float)in_x1[2]),(int)(fVar1 * (float)in_x1[3]));
  return;
}


/* ScaledApp::ScaleNum(double) */

undefined1  [16] __thiscall ScaledApp::ScaleNum(ScaledApp *this,double param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = (float)GetScaleAmount(this);
  auVar2._0_8_ = (double)fVar1 * param_1;
  auVar2._8_8_ = 0;
  return auVar2;
}


/* ScaledApp::ScreenScaleNum(float) */

float __thiscall ScaledApp::ScreenScaleNum(ScaledApp *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)GetScaleAmount(this);
  return param_1 / fVar1;
}


/* ScaledApp::UIScreenScaleNum(int) */

int __thiscall ScaledApp::UIScreenScaleNum(ScaledApp *this,int param_1)

{
  float fVar1;
  
  fVar1 = (float)GetUIScaleAmount(this);
  return (int)((float)param_1 / fVar1);
}


/* ScaledApp::UIScreenScaleNum(float) */

float __thiscall ScaledApp::UIScreenScaleNum(ScaledApp *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)GetUIScaleAmount(this);
  return param_1 / fVar1;
}


/* ScaledApp::ScreenScaleNum(Sexy::TRect<int> const&) */

void ScaledApp::ScreenScaleNum(TRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_x1;
  Insets *in_x8;
  
  iVar1 = ScreenScaleNum((ScaledApp *)param_1,*in_x1);
  iVar2 = ScreenScaleNum((ScaledApp *)param_1,in_x1[1]);
  iVar3 = ScreenScaleNum((ScaledApp *)param_1,in_x1[2]);
  iVar4 = ScreenScaleNum((ScaledApp *)param_1,in_x1[3]);
  Sexy::Insets::Insets(in_x8,iVar1,iVar2,iVar3,iVar4);
  return;
}


/* ScaledApp::UIScaleNum(double) */

undefined1  [16] __thiscall ScaledApp::UIScaleNum(ScaledApp *this,double param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = (float)GetUIScaleAmount(this);
  auVar2._0_8_ = (double)fVar1 * param_1;
  auVar2._8_8_ = 0;
  return auVar2;
}


/* ScaledApp::UIScaleNum(Sexy::TRect<int> const&) */

void ScaledApp::UIScaleNum(TRect *param_1)

{
  int *in_x1;
  Insets *in_x8;
  float fVar1;
  
  fVar1 = (float)GetUIScaleAmount((ScaledApp *)param_1);
  Sexy::Insets::Insets
            (in_x8,(int)(fVar1 * (float)*in_x1),(int)(fVar1 * (float)in_x1[1]),
             (int)(fVar1 * (float)in_x1[2]),(int)(fVar1 * (float)in_x1[3]));
  return;
}

