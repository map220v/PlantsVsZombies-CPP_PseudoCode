// Class: EATextSquish::ColourFit


/* EATextSquish::ColourFit::~ColourFit() */

void __thiscall EATextSquish::ColourFit::~ColourFit(ColourFit *this)

{
  free(this);
  return;
}


/* EATextSquish::ColourFit::Compress(void*) */

void EATextSquish::ColourFit::Compress(void *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))();
  return;
}


/* EATextSquish::ColourFit::ColourFit(EATextSquish::ColorSet const*) */

void __thiscall EATextSquish::ColourFit::ColourFit(ColourFit *this,ColorSet *param_1)

{
  *(ColorSet **)(this + 8) = param_1;
  *(undefined **)this = &DAT_06a381e0;
  return;
}

