// Class: StandaloneEffectFactory


/* StandaloneEffectFactory::StandaloneEffectFactory(PVZDB::TableIndex) */

void __thiscall
StandaloneEffectFactory::StandaloneEffectFactory(StandaloneEffectFactory *this,undefined4 param_2)

{
  *(undefined4 *)(this + 8) = param_2;
  *(undefined ***)this = &PTR_nop_06927260;
  return;
}


/* StandaloneEffectFactory::GetEffectsTableFactory() */

undefined * StandaloneEffectFactory::GetEffectsTableFactory(void)

{
  int iVar1;
  
  if (((DAT_06b75648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b75648), iVar1 != 0)) {
    StandaloneEffectFactory((StandaloneEffectFactory *)&DAT_06b75610,0x31);
    __cxa_guard_release(&DAT_06b75648);
    __cxa_atexit(nop,&DAT_06b75610,&DAT_06a88000);
    return &DAT_06b75610;
  }
  return &DAT_06b75610;
}


/* StandaloneEffectFactory::GetOutsideOfTableFactory() */

undefined * StandaloneEffectFactory::GetOutsideOfTableFactory(void)

{
  int iVar1;
  
  if (((DAT_06b75620 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b75620), iVar1 != 0)) {
    StandaloneEffectFactory((StandaloneEffectFactory *)&DAT_06b75628,0xffffffff);
    __cxa_guard_release(&DAT_06b75620);
    __cxa_atexit(nop,&DAT_06b75628,&DAT_06a88000);
    return &DAT_06b75628;
  }
  return &DAT_06b75628;
}


/* StandaloneEffectFactory::AddEffect(Sexy::RtClass*) */

void __thiscall StandaloneEffectFactory::AddEffect(StandaloneEffectFactory *this,RtClass *param_1)

{
  GameObject::Create(param_1,*(undefined4 *)(this + 8));
  nop();
  return;
}


/* Effect_StaticImage* StandaloneEffectFactory::AddEffect<Effect_StaticImage>() */

Effect_StaticImage * __thiscall
StandaloneEffectFactory::AddEffect<Effect_StaticImage>(StandaloneEffectFactory *this)

{
  RtClass *pRVar1;
  Effect_StaticImage *extraout_x0;
  
  pRVar1 = (RtClass *)Effect_StaticImage::StaticGetClass();
  AddEffect(this,pRVar1);
  nop();
  return extraout_x0;
}


/* StandaloneEffectFactory::CreateCenteredScreenSpaceEffectStaticImage() */

StandaloneEffect * __thiscall
StandaloneEffectFactory::CreateCenteredScreenSpaceEffectStaticImage(StandaloneEffectFactory *this)

{
  StandaloneEffect *this_00;
  
  AddEffect<Effect_StaticImage>(this);
  nop();
  StandaloneEffect::SetIsScreenSpaceEffect(this_00,true);
  Effect_BouncingArrow::SetTransX((Effect_BouncingArrow *)this_00,true);
  StandaloneEffect::SetKeepAlive(this_00,true);
  return this_00;
}


/* Effect_PopAnim* StandaloneEffectFactory::AddEffect<Effect_PopAnim>() */

Effect_PopAnim * __thiscall
StandaloneEffectFactory::AddEffect<Effect_PopAnim>(StandaloneEffectFactory *this)

{
  RtClass *pRVar1;
  Effect_PopAnim *extraout_x0;
  
  pRVar1 = (RtClass *)Effect_PopAnim::StaticGetClass();
  AddEffect(this,pRVar1);
  nop();
  return extraout_x0;
}


/* StandaloneEffectFactory::CreateCenteredScreenSpaceEffectPopAnim() */

StandaloneEffect * __thiscall
StandaloneEffectFactory::CreateCenteredScreenSpaceEffectPopAnim(StandaloneEffectFactory *this)

{
  StandaloneEffect *this_00;
  
  AddEffect<Effect_PopAnim>(this);
  nop();
  StandaloneEffect::SetIsScreenSpaceEffect(this_00,true);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
  StandaloneEffect::SetKeepAlive(this_00,true);
  return this_00;
}

