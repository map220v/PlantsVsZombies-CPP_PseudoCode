// Class: Lua::CUIColorLayer


/* Lua::CUIColorLayer::GetLayerColor() const */

CUIColorLayer * __thiscall Lua::CUIColorLayer::GetLayerColor(CUIColorLayer *this)

{
  return this + 0x128;
}


/* Lua::CUIColorLayer::SetLayerColor(Sexy::Color const&) */

void __thiscall Lua::CUIColorLayer::SetLayerColor(CUIColorLayer *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x128) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x130) = uVar1;
  return;
}


/* Lua::CUIColorLayer::~CUIColorLayer() */

void __thiscall Lua::CUIColorLayer::~CUIColorLayer(CUIColorLayer *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2b4b0;
  CUIImage::~CUIImage((CUIImage *)this);
  return;
}


/* Lua::CUIColorLayer::~CUIColorLayer() */

void __thiscall Lua::CUIColorLayer::~CUIColorLayer(CUIColorLayer *this)

{
  ~CUIColorLayer(this);
  AK::FreeHook(this);
  return;
}


/* Lua::CUIColorLayer::CUIColorLayer() */

void __thiscall Lua::CUIColorLayer::CUIColorLayer(CUIColorLayer *this)

{
  CUIImage::CUIImage((CUIImage *)this);
  *(undefined ***)this = &PTR_GetClass_06a2b4b0;
  Sexy::Color::Color((Color *)(this + 0x128));
  return;
}


/* Lua::CUIColorLayer::CUIColorLayer(Sexy::Color const&) */

void __thiscall Lua::CUIColorLayer::CUIColorLayer(CUIColorLayer *this,Color *param_1)

{
  CUIImage::CUIImage((CUIImage *)this);
  *(undefined ***)this = &PTR_GetClass_06a2b4b0;
  Sexy::Insets::Insets((Insets *)(this + 0x128),(Insets *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIColorLayer::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
Lua::CUIColorLayer::DrawAll(CUIColorLayer *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_2);
  Sexy::Graphics::ClearClipRect(param_2);
  iVar1 = *(int *)(this + 300);
  iVar2 = *(int *)(this + 0x130);
  iVar3 = *(int *)(this + 0x134);
  iVar4 = *(int *)(this + 0x128);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  Sexy::Insets::Insets(aIStack_18,iVar4,iVar1,iVar2,iVar3);
  Sexy::Graphics::SetColor(param_2,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

