// Class: Sexy::CBFunctionTranslator1wRet<bool,Sexy::Point_const&,bool(*)(Sexy::Point_const&)>


/* Sexy::CBFunctionTranslator1wRet<bool, Sexy::Point const&, bool (*)(Sexy::Point
   const&)>::thunk(Sexy::DelegateBase const&, Sexy::Point const&) */

void Sexy::CBFunctionTranslator1wRet<bool,Sexy::Point_const&,bool(*)(Sexy::Point_const&)>::thunk
               (DelegateBase *param_1,Point *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_03c3eb8c(*(undefined8 *)(param_1 + 8));
  (*pcVar1)(param_2);
  return;
}


/* Sexy::CBFunctionTranslator1wRet<Sexy::RtId, Sexy::RtObject*, Sexy::RtId
   (*)(Sexy::RtObject*)>::thunk(Sexy::DelegateBase const&, Sexy::RtObject*) */

void __thiscall
Sexy::CBFunctionTranslator1wRet<Sexy::RtId,Sexy::RtObject*,Sexy::RtId(*)(Sexy::RtObject*)>::thunk
          (CBFunctionTranslator1wRet<Sexy::RtId,Sexy::RtObject*,Sexy::RtId(*)(Sexy::RtObject*)>
           *this,DelegateBase *param_1,RtObject *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_0517e160(*(undefined8 *)(this + 8));
  (*pcVar1)(param_1);
  return;
}

