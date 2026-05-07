// Class: Sexy::CBFunctionTranslator0<void(*)()>


/* Sexy::CBFunctionTranslator0<void (*)()>::thunk(Sexy::DelegateBase const&) */

void Sexy::CBFunctionTranslator0<void(*)()>::thunk(DelegateBase *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_036b3248(*(undefined8 *)(param_1 + 8));
  (*pcVar1)();
  return;
}

