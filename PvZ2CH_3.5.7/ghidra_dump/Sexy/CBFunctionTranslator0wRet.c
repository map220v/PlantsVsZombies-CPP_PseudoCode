// Class: Sexy::CBFunctionTranslator0wRet<bool,bool(*)()>


/* Sexy::CBFunctionTranslator0wRet<bool, bool (*)()>::thunk(Sexy::DelegateBase const&) */

void Sexy::CBFunctionTranslator0wRet<bool,bool(*)()>::thunk(DelegateBase *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_03f0a9bc(*(undefined8 *)(param_1 + 8));
  (*pcVar1)();
  return;
}

