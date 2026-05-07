// Class: Sexy::RenderEffectTechnique


/* Sexy::RenderEffectTechnique::RenderEffectTechnique(Sexy::RenderEffectTechnique&&) */

void __thiscall
Sexy::RenderEffectTechnique::RenderEffectTechnique
          (RenderEffectTechnique *this,RenderEffectTechnique *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  this[0x18] = param_1[0x18];
  return;
}


/* Sexy::RenderEffectTechnique::~RenderEffectTechnique() */

void __thiscall Sexy::RenderEffectTechnique::~RenderEffectTechnique(RenderEffectTechnique *this)

{
  FUN_052d9f5c(*(undefined8 *)this);
  return;
}

