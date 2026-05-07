// Class: Lua::CUIAnim


/* Lua::CUIAnim::SetScale(float, float) */

float Lua::CUIAnim::SetScale(float param_1,float param_2)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0xd8) != (long *)0x0) {
    param_1 = (float)(**(code **)(**(long **)(in_x0 + 0xd8) + 0xb8))();
  }
  return param_1;
}


/* Lua::CUIAnim::~CUIAnim() */

void __thiscall Lua::CUIAnim::~CUIAnim(CUIAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2a180;
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 0x18))();
    *(undefined8 *)(this + 0xd8) = 0;
  }
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* Lua::CUIAnim::~CUIAnim() */

void __thiscall Lua::CUIAnim::~CUIAnim(CUIAnim *this)

{
  ~CUIAnim(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIAnim::Move(int, int) */

void __thiscall Lua::CUIAnim::Move(CUIAnim *this,int param_1,int param_2)

{
  StandaloneEffect *this_00;
  FastCurve aFStack_10 [8];
  long local_8;
  
  this_00 = *(StandaloneEffect **)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  if (this_00 != (StandaloneEffect *)0x0) {
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)param_1,(float)param_2);
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_10,900000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUIAnim::PlayAction(std::string, bool) */

void __thiscall Lua::CUIAnim::PlayAction(CUIAnim *this,undefined8 param_2,char param_3)

{
  Effect_PopAnim *pEVar1;
  
  pEVar1 = *(Effect_PopAnim **)(this + 0xd8);
  if (pEVar1 == (Effect_PopAnim *)0x0) {
    return;
  }
  if (param_3 == '\0') {
    Effect_PopAnim::PlaySingleAnimation();
    return;
  }
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,param_2,0);
  return;
}


/* Lua::CUIAnim::CUIAnim(std::string const&) */

void __thiscall Lua::CUIAnim::CUIAnim(CUIAnim *this,string *param_1)

{
  Effect_PopAnim *pEVar1;
  PopAnim *pPVar2;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2a180;
  pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xd8) = pEVar1;
  pPVar2 = (PopAnim *)StringHelper::ToAnimRig(param_1,false);
  Effect_PopAnim::CreatePopAnimRig(*(Effect_PopAnim **)(this + 0xd8),pPVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xd8),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xd8),true);
  return;
}


/* Lua::CUIAnim::Update() */

void __thiscall Lua::CUIAnim::Update(CUIAnim *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0xd8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xd8));
    return;
  }
  return;
}


/* Lua::CUIAnim::Draw(Sexy::Graphics*) */

void __thiscall Lua::CUIAnim::Draw(CUIAnim *this,Graphics *param_1)

{
  nop();
  if (*(StandaloneEffect **)(this + 0xd8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xd8),param_1);
    return;
  }
  return;
}

