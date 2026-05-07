// Class: PVZ2NewTutorialDialog


/* PVZ2NewTutorialDialog::~PVZ2NewTutorialDialog() */

void __thiscall PVZ2NewTutorialDialog::~PVZ2NewTutorialDialog(PVZ2NewTutorialDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06838430;
  *(undefined **)(this + 0xd8) = &DAT_06838778;
  if (*(long **)(this + 0x1e8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1e8) + 0x18))();
    *(undefined8 *)(this + 0x1e8) = 0;
  }
  PVZ2UIDialog::~PVZ2UIDialog((PVZ2UIDialog *)this);
  return;
}


/* PVZ2NewTutorialDialog::~PVZ2NewTutorialDialog() */

void __thiscall PVZ2NewTutorialDialog::~PVZ2NewTutorialDialog(PVZ2NewTutorialDialog *this)

{
  ~PVZ2NewTutorialDialog(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2NewTutorialDialog::Update() */

void __thiscall PVZ2NewTutorialDialog::Update(PVZ2NewTutorialDialog *this)

{
  PVZ2UIDialog::Update((PVZ2UIDialog *)this);
  if (*(StandaloneEffect **)(this + 0x1e8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x1e8));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2NewTutorialDialog::Resize(int, int, int, int) */

void __thiscall
PVZ2NewTutorialDialog::Resize
          (PVZ2NewTutorialDialog *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  StandaloneEffect *this_00;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  this_00 = *(StandaloneEffect **)(this + 0x1e8);
  if (this_00 != (StandaloneEffect *)0x0) {
    iVar1 = FUN_04373ce4(0x14);
    Sexy::FastCurve::SetOutRange
              (aFStack_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 3 + iVar1));
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_10,900000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2NewTutorialDialog::Draw(Sexy::Graphics*) */

void __thiscall PVZ2NewTutorialDialog::Draw(PVZ2NewTutorialDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  LotteryResultProgressBar *this_00;
  
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd6e0);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd6e0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar3,iVar1 / 2 - iVar2 / 2,*(int *)(this + 0x4c));
  PVZ2UIDialog::Draw((PVZ2UIDialog *)this,param_1);
  if (*(StandaloneEffect **)(this + 0x1e8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1e8),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2NewTutorialDialog::PVZ2NewTutorialDialog(std::string const&, std::string const&) */

void __thiscall
PVZ2NewTutorialDialog::PVZ2NewTutorialDialog
          (PVZ2NewTutorialDialog *this,string *param_1,string *param_2)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIDialog::PVZ2UIDialog((PVZ2UIDialog *)this);
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined ***)this = &PTR_GetClass_06838430;
  *(undefined **)(this + 0xd8) = &DAT_06838778;
  PVZ2UIDialog::Hide((PVZ2UIDialog *)this,1);
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    pEVar2 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x1e8) = pEVar2;
    GetPAMByName(param_1);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0x1e8),(PopAnim *)pRVar3,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1e8),true);
    (**(code **)(**(long **)(this + 0x1e8) + 0x80))(0x3f19999a,*(long **)(this + 0x1e8));
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(*(Effect_PopAnim **)(this + 0x1e8),param_2,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

