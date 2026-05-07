// Class: Lua::CUIDarkeningLayer


/* Lua::CUIDarkeningLayer::~CUIDarkeningLayer() */

void __thiscall Lua::CUIDarkeningLayer::~CUIDarkeningLayer(CUIDarkeningLayer *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2b190;
  CUIImage::~CUIImage((CUIImage *)this);
  return;
}


/* Lua::CUIDarkeningLayer::~CUIDarkeningLayer() */

void __thiscall Lua::CUIDarkeningLayer::~CUIDarkeningLayer(CUIDarkeningLayer *this)

{
  ~CUIDarkeningLayer(this);
  AK::FreeHook(this);
  return;
}


/* Lua::CUIDarkeningLayer::CUIDarkeningLayer(float) */

void __thiscall Lua::CUIDarkeningLayer::CUIDarkeningLayer(CUIDarkeningLayer *this,float param_1)

{
  CUIImage::CUIImage((CUIImage *)this);
  *(undefined ***)this = &PTR_GetClass_06a2b190;
  *(float *)(this + 0x128) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDarkeningLayer::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
Lua::CUIDarkeningLayer::DrawAll(CUIDarkeningLayer *this,ModalFlags *param_1,Graphics *param_2)

{
  float fVar1;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_2);
  fVar1 = *(float *)(this + 0x128);
  Sexy::Graphics::ClearClipRect(param_2);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  Sexy::Insets::Insets(aIStack_18,0,0,0,(int)(fVar1 * 255.0));
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

