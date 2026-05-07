// Class: Sexy::CBFunctionTranslator1<Zombie*,void(*)(Zombie*)>


/* Sexy::CBFunctionTranslator1<Zombie*, void (*)(Zombie*)>::thunk(Sexy::DelegateBase const&,
   Zombie*) */

void Sexy::CBFunctionTranslator1<Zombie*,void(*)(Zombie*)>::thunk
               (DelegateBase *param_1,Zombie *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_038f3b00(*(undefined8 *)(param_1 + 8));
  (*pcVar1)(param_2);
  return;
}


/* Sexy::CBFunctionTranslator1<Plant*, void (*)(Plant*)>::thunk(Sexy::DelegateBase const&, Plant*)
    */

void Sexy::CBFunctionTranslator1<Plant*,void(*)(Plant*)>::thunk
               (DelegateBase *param_1,Plant *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_038f3b00(*(undefined8 *)(param_1 + 8));
  (*pcVar1)(param_2);
  return;
}


/* Sexy::CBFunctionTranslator1<std::string const&, void (*)(std::string
   const&)>::thunk(Sexy::DelegateBase const&, std::string const&) */

void Sexy::CBFunctionTranslator1<std::string_const&,void(*)(std::string_const&)>::thunk
               (DelegateBase *param_1,string *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_038f3b00(*(undefined8 *)(param_1 + 8));
  (*pcVar1)(param_2);
  return;
}

