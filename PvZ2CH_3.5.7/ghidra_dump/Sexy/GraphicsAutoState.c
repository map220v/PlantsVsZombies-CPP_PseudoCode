// Class: Sexy::GraphicsAutoState


/* Sexy::GraphicsAutoState::GraphicsAutoState(Sexy::Graphics*) */

void __thiscall
Sexy::GraphicsAutoState::GraphicsAutoState(GraphicsAutoState *this,Graphics *param_1)

{
  *(Graphics **)this = param_1;
  Graphics::PushState(param_1);
  return;
}


/* Sexy::GraphicsAutoState::~GraphicsAutoState() */

void __thiscall Sexy::GraphicsAutoState::~GraphicsAutoState(GraphicsAutoState *this)

{
  Graphics::PopState(*(Graphics **)this);
  return;
}

